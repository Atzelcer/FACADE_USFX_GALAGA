#include "SLiteBarWidget.h"
#include "SlateOptMacros.h"
#include "Widgets/SBoxPanel.h"
#include "Widgets/Notifications/SProgressBar.h"

BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION

void SLiteBarWidget::Construct(const FArguments& InArgs)
{
    OwningPawn = InArgs._OwningPawn;
    MaxHealth = InArgs._MaxHealth;

    ChildSlot
        [
            SNew(SOverlay)
                + SOverlay::Slot()
                .HAlign(HAlign_Center)  // Centrado horizontalmente
                .VAlign(VAlign_Center)  // Centrado verticalmente
                [
                    SNew(SBox)
                        .WidthOverride(300.f)  // Anchura de la barra de salud
                        .HeightOverride(30.f)  // Altura de la barra de salud
                        [
                            SAssignNew(HealthBar, SProgressBar)
                                .Percent(1.0f)  // Inicia lleno
                                .FillColorAndOpacity(FLinearColor::Green)  // Color inicial verde
                        ]
                ]
        ];

    if (OwningPawn.IsValid())
    {
        UpdateHealthBar();
    }
}

void SLiteBarWidget::UpdateHealthBar()
{
    if (OwningPawn.IsValid())
    {
        float CurrentHealth = OwningPawn->GetHealth();
        float HealthPercent = CurrentHealth / MaxHealth;
        HealthBar->SetPercent(HealthPercent);

        FLinearColor BarColor = FLinearColor::LerpUsingHSV(FLinearColor::Red, FLinearColor::Green, HealthPercent);
        HealthBar->SetFillColorAndOpacity(BarColor);
    }

}

void SLiteBarWidget::SetPosition(const FVector2D& NewPosition)
{
    if (HealthBar.IsValid())
    {
        HealthBar->SetRenderTransform(FSlateRenderTransform(NewPosition));
    }
}



END_SLATE_FUNCTION_BUILD_OPTIMIZATION
