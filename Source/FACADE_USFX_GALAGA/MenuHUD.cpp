#include "MenuHUD.h"
#include "MainMenuWidget.h"
#include "Widgets/SWeakWidget.h"
#include "Engine/Engine.h"
#include "GameFramework/PlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "FACADE_USFX_GALAGAGameMode.h"
#include "P_F_DIFICULTAD_FACADE.h"

AMenuHUD::AMenuHUD()
{
    // Constructor contents if needed
}

void AMenuHUD::BeginPlay()
{
    Super::BeginPlay();
    ShowMenu();
    InitializeFacadeReference();
}

void AMenuHUD::ShowMenu()
{
    if (GEngine && GEngine->GameViewport)
    {
        MenuWidget = SNew(MainMenuWidget).OwningHUD(this);
        GEngine->GameViewport->AddViewportWidgetContent(SAssignNew(MenuWidgetContainer, SWeakWidget).PossiblyNullContent(MenuWidget.ToSharedRef()));
        if (PlayerOwner)
        {
            PlayerOwner->bShowMouseCursor = true;
            PlayerOwner->SetInputMode(FInputModeUIOnly());
        }
    }
}

void AMenuHUD::RemoveMenu()
{
    if (GEngine && GEngine->GameViewport && MenuWidget.IsValid())
    {
        GEngine->GameViewport->RemoveViewportWidgetContent(MenuWidgetContainer.ToSharedRef());
        if (PlayerOwner)
        {
            PlayerOwner->bShowMouseCursor = false;
            PlayerOwner->SetInputMode(FInputModeGameOnly());
        }
    }
}

void AMenuHUD::StartGameplayFacil()
{
    RemoveMenu();
    if (auto* GM = Cast<AFACADE_USFX_GALAGAGameMode>(GetWorld()->GetAuthGameMode()))
    {
        GM->ChangeDifficulty(1);  // 1 for Easy
    }
}

void AMenuHUD::StartGameplayNormal()
{
    RemoveMenu();
    if (auto* GM = Cast<AFACADE_USFX_GALAGAGameMode>(GetWorld()->GetAuthGameMode()))
    {
        GM->ChangeDifficulty(2);  // 2 for Normal
    }
}

void AMenuHUD::StartGameplayDificil()
{
    RemoveMenu();
    if (auto* GM = Cast<AFACADE_USFX_GALAGAGameMode>(GetWorld()->GetAuthGameMode()))
    {
        GM->ChangeDifficulty(3);  // 3 for Hard
    }
}

void AMenuHUD::InitializeFacadeReference()
{
    TArray<AActor*> FoundActors;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), AP_F_DIFICULTAD_FACADE::StaticClass(), FoundActors);

    if (FoundActors.Num() > 0)
    {
        Facade = Cast<AP_F_DIFICULTAD_FACADE>(FoundActors[0]);
        if (Facade)
        {
            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("[HUD] Facade inicializado correctamente."));
        }
        else
        {
            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("[HUD] Error al castear Facade."));
        }
    }
    else
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("[HUD] Facade no encontrado, reintentando..."));
        FTimerHandle TimerHandle;
        GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AMenuHUD::InitializeFacadeReference, 1.0f, false);
    }
}

