#include "P_FM_FABRICA_OBSTACULOS_01.h"
#include "ASTEROIDES.h"
#include "MINA_GALACTICA.h"
#include "COMETA.h"
#include "SATELITE.h"
#include "METEORO.h"

AOBSTACULOS_ESPACIALES_P* AP_FM_FABRICA_OBSTACULOS_01::Crear_Obstaculos(FString Obstaculo_Identificador)
{
    FVector SpawnLocation = FVector(1770.0f, FMath::RandRange(-1780, 1780), 210.0f);
    FRotator Rotation = FRotator(0.f, 0.f, 0.f);

    if (Obstaculo_Identificador.Equals("Asteroide"))
        return GetWorld()->SpawnActor<AASTEROIDES>(AASTEROIDES::StaticClass(), SpawnLocation, Rotation);

    if (Obstaculo_Identificador.Equals("Mina_Galactica"))
        return GetWorld()->SpawnActor<AMINA_GALACTICA>(AMINA_GALACTICA::StaticClass(), SpawnLocation, Rotation);

    if (Obstaculo_Identificador.Equals("Cometa"))
        return GetWorld()->SpawnActor<ACOMETA>(ACOMETA::StaticClass(), SpawnLocation, Rotation);

    if (Obstaculo_Identificador.Equals("Satelite"))
        return GetWorld()->SpawnActor<ASATELITE>(ASATELITE::StaticClass(), SpawnLocation, Rotation);

    if (Obstaculo_Identificador.Equals("Meteoro"))
        return GetWorld()->SpawnActor<AMETEORO>(AMETEORO::StaticClass(), SpawnLocation, Rotation);

    return nullptr; // Retorna nullptr si el identificador no coincide
}
