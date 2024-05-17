//// Fill out your copyright notice in the Description page of Project Settings.
//#include "HUD_Dificultad.h"
//#include "S_Menu_Logica.h"
//#include "Widgets/SWeakWidget.h"
//#include "Engine/Engine.h"
//#include "GameFramework/HUD.h"
//#include "GameFramework/PlayerController.h"
//
//void AHUD_Dificultad::BeginPlay()
//{
//	Super::BeginPlay();
//	ShowMenu();
//}
//
//void AHUD_Dificultad::ShowMenu()
//{
//
//	if (GEngine && GEngine->GameViewport)
//	{
//		MenuWidget = SNew(SMenu_Logica).OwningHUD(this);
//		GEngine->GameViewport->AddViewportWidgetContent(SAssignNew(MenuWidgetContainer, SWeakWidget).PossiblyNullContent(MenuWidget.ToSharedRef()));
//		if (PlayerOwner)
//		{
//			PlayerOwner->bShowMouseCursor = true;
//			PlayerOwner->SetInputMode(FInputModeUIOnly());
//		}
//
//	}
//
//}
//
//void AHUD_Dificultad::RemoveMenu()
//{
//	if (GEngine && GEngine->GameViewport && MenuWidget.IsValid())
//	{
//		GEngine->GameViewport->RemoveViewportWidgetContent(MenuWidgetContainer.ToSharedRef());
//		if (PlayerOwner)
//		{
//			PlayerOwner->bShowMouseCursor = false;
//			FInputModeGameOnly InputMode;
//			PlayerOwner->SetInputMode(InputMode);
//		}
//	}
//}
//
