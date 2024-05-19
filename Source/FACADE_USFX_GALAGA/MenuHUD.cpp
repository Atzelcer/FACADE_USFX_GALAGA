// MenuHUD.cpp

#include "MenuHUD.h"
#include "MainMenuWidget.h"
#include "Widgets/SWeakWidget.h"
#include "Engine/Engine.h"
#include "GameFramework/PlayerController.h"
#include "Kismet/GameplayStatics.h"
//#include "FACADE_USFX_GALAGAGameMode.h"
#include "P_F_DIFICULTAD_FACADE.h"
#include "FACADE_USFX_GALAGAPawn.h"
#include "SLiteBarWidget.h" 
#include "Widgets/Notifications/SProgressBar.h"
#include "Widgets/SWeakWidget.h"

AMenuHUD::AMenuHUD()
{
}

void AMenuHUD::BeginPlay()
{
    Super::BeginPlay();


    // Crea el Facade si no existe

    if (!Facade)
    {
        Facade = GetWorld()->SpawnActor<AP_F_DIFICULTAD_FACADE>();


        if (Facade)
        {
            GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Green, TEXT("[GameMode] Facade creado y configurado correctamente."));
        }
        else
        {
            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("[GameMode] Error al crear el Facade."));
        }
    }


    ShowMenu();
    InitializeFacadeReference();
    SetupHealthBar();


}

void AMenuHUD::SetupHealthBar()
{
    AFACADE_USFX_GALAGAPawn* PlayerPawn = Cast<AFACADE_USFX_GALAGAPawn>(UGameplayStatics::GetPlayerPawn(this, 0));
    if (PlayerPawn)
    {
        HealthWidget = SNew(SLiteBarWidget).OwningPawn(PlayerPawn);
        GEngine->GameViewport->AddViewportWidgetContent(SNew(SWeakWidget).PossiblyNullContent(HealthWidget.ToSharedRef()));
        HealthWidget->SetVisibility(EVisibility::Collapsed);  // Inicialmente oculta
    }
}

void AMenuHUD::ShowMenu()
{
    if (GEngine && GEngine->GameViewport && !MenuWidget.IsValid())
    {
        MenuWidget = SNew(MainMenuWidget).OwningHUD(this);
        GEngine->GameViewport->AddViewportWidgetContent(SAssignNew(MenuWidgetContainer, SWeakWidget).PossiblyNullContent(MenuWidget.ToSharedRef()));
        if (PlayerOwner)
        {
            PlayerOwner->bShowMouseCursor = true;
            PlayerOwner->SetInputMode(FInputModeUIOnly());
        }
        if (HealthWidget.IsValid())
        {
            HealthWidget->SetVisibility(EVisibility::Collapsed);
        }
    }
}

void AMenuHUD::RemoveMenu()
{
    if (GEngine && GEngine->GameViewport && MenuWidget.IsValid())
    {
        GEngine->GameViewport->RemoveViewportWidgetContent(MenuWidgetContainer.ToSharedRef());
        MenuWidget.Reset();
        if (PlayerOwner)
        {
            PlayerOwner->bShowMouseCursor = false;
            PlayerOwner->SetInputMode(FInputModeGameOnly());
        }
        if (HealthWidget.IsValid())
        {
            HealthWidget->SetVisibility(EVisibility::Visible);
        }
    }
}


void AMenuHUD::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (HealthWidget.IsValid())
    {
        HealthWidget->UpdateHealthBar();
    }

    if (HealthWidget.IsValid() && PlayerOwner)
    {
        AFACADE_USFX_GALAGAPawn* PlayerPawn = Cast<AFACADE_USFX_GALAGAPawn>(UGameplayStatics::GetPlayerPawn(this, 0));
        if (PlayerPawn)
        {
            FVector2D ScreenPosition;
            // Proyecta la ubicación del mundo al espacio de la pantalla
            if (PlayerOwner->ProjectWorldLocationToScreen(PlayerPawn->GetActorLocation(), ScreenPosition))
            {
                // Ajusta la posición de la barra de salud detrás de la nave en la pantalla
                ScreenPosition.Y -= 240;  // Mueve hacia arriba en la pantalla
                ScreenPosition.X -= 700;  // Mueve ligeramente hacia la izquierda

                // Actualiza el porcentaje de la barra de salud
                HealthWidget->SetPosition(ScreenPosition);
            }
        }
    }
}


void AMenuHUD::StartGameplayFacil()
{
	RemoveMenu();
    if (Facade)
    {
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::White, FString::Printf(TEXT("[HUD] Activando modo facil ")));
        Facade->ActivateFacilMode();
    }
}


void AMenuHUD::StartGameplayNormal()
{
    RemoveMenu();
    if (Facade)
    {
        GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::White, FString::Printf(TEXT("[HUD] Activando modo Normal ")));
        Facade->ActivateNormalMode();
    }
}


void AMenuHUD::StartGameplayDificil()
{
    RemoveMenu();
    if (Facade)
    {
        GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::White, FString::Printf(TEXT("[HUD] Activando modo Dificil ")));
        Facade->ActivateDificilMode();
    }
}


void AMenuHUD::InitializeFacadeReference()
{
    TArray<AActor*> FoundActors;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), AP_F_DIFICULTAD_FACADE::StaticClass(), FoundActors);
    if (FoundActors.Num() > 0)
    {
        Facade = Cast<AP_F_DIFICULTAD_FACADE>(FoundActors[0]);
    }
    else
    {
        FTimerHandle TimerHandle;
        GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AMenuHUD::InitializeFacadeReference, 1.0f, false);
    }
}