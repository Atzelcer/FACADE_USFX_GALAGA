#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MenuHUD.generated.h"

UCLASS()
class FACADE_USFX_GALAGA_API AMenuHUD : public AHUD
{
    GENERATED_BODY()

public:
    AMenuHUD();

protected:
    virtual void BeginPlay() override;

public:
    void ShowMenu();
    void RemoveMenu();


    void StartGameplayFacil();
    void StartGameplayNormal();
    void StartGameplayDificil();
    void InitializeFacadeReference();

private:
    TSharedPtr<class MainMenuWidget> MenuWidget;
    TSharedPtr<class SWidget> MenuWidgetContainer;
    class AP_F_DIFICULTAD_FACADE* Facade;  // Referencia al Facade
};
