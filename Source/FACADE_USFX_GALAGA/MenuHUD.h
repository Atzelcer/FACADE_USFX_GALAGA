#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "SLiteBarWidget.h"
#include "MenuHUD.generated.h"

UCLASS()
class FACADE_USFX_GALAGA_API AMenuHUD : public AHUD
{
    GENERATED_BODY()

public:
    AMenuHUD();

protected:
    virtual void BeginPlay() override;
    void SetupHealthBar();

public:
    void ShowMenu();
    void RemoveMenu();
    virtual void Tick(float DeltaTime) override;

    void StartGameplayFacil();
    void StartGameplayNormal();
    void StartGameplayDificil();

    void InitializeFacadeReference();

private:
    TSharedPtr<class MainMenuWidget> MenuWidget;
    TSharedPtr<class SWidget> MenuWidgetContainer;

    class AP_F_DIFICULTAD_FACADE* Facade;

    TSharedPtr<SLiteBarWidget> HealthWidget;
};
