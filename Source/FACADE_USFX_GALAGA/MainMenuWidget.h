// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SlateBasics.h"
#include "SlateExtras.h"

//Clase Vacia para el Widget

// Para controlar las entradas del jugador con la interfaz del menu
class  MainMenuWidget : public SCompoundWidget
{
public:
    SLATE_BEGIN_ARGS(MainMenuWidget)
        : _OwningHUD(nullptr)
        {}

        SLATE_ARGUMENT(TWeakObjectPtr<class AMenuHUD>, OwningHUD)

    SLATE_END_ARGS()

    // Construye los elementos del menu, ( BOTONES )
    void Construct(const FArguments& InArgs);

    //Declaramos los metodos para llegar a presionar los botones(Clickear)

    ////Boton de Comenzar
    //FReply OnComenzarClicked() const;
    ////Boton de Ajustes 
    //FReply OnAjustesClicked() const;
    ////Boton de Salir 
    //FReply OnSalirClicked() const;


    FReply OnFacilClicked() const;
    FReply OnNormalClicked() const;
    FReply OnDificilClicked() const;

    virtual bool SupportsKeyboardFocus() const override { return true; }

    TWeakObjectPtr<class AMenuHUD> OwningHUD;
};


