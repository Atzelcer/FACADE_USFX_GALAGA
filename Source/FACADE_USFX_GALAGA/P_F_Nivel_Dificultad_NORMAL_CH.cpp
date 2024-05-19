// Fill out your copyright notice in the Description page of Project Settings.

#include "P_F_Nivel_Dificultad_NORMAL_CH.h"
#include "NAVE_ENEMIGA_P.h"
#include "OBSTACULOS_ESPACIALES_P.h"
#include "P_FM_FABRICA_NAVES_P.h"
#include "P_FM_FABRICA_OBSTACULOS_01.h"


AP_F_Nivel_Dificultad_NORMAL_CH::AP_F_Nivel_Dificultad_NORMAL_CH()
{
	PrimaryActorTick.bCanEverTick = true;
}



void AP_F_Nivel_Dificultad_NORMAL_CH::BeginPlay()
{
	Super::BeginPlay();

	// Instanciar las fábricas
	FABRICA_NAVES_B = GetWorld()->SpawnActor<AP_FM_FABRICA_NAVES_P>(AP_FM_FABRICA_NAVES_P::StaticClass());
	FABRICA_OBSTACULOS_B = GetWorld()->SpawnActor<AP_FM_FABRICA_OBSTACULOS_01>(AP_FM_FABRICA_OBSTACULOS_01::StaticClass());

	TiempoDesdeUltimaNave = 0.0f;
	IntervaloNave = 3.0f;
	TiempoDesdeUltimoObstaculo = 0.0f;
	IntervaloObstaculo = 5.0f;
}



void AP_F_Nivel_Dificultad_NORMAL_CH::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	TiempoDesdeUltimaNave += DeltaTime;
	if (TiempoDesdeUltimaNave >= IntervaloNave) {
		TiempoDesdeUltimaNave = 0.0f;
		GenerarYConfigurarNave();
	}

	TiempoDesdeUltimoObstaculo += DeltaTime;
	if (TiempoDesdeUltimoObstaculo >= IntervaloObstaculo) {
		TiempoDesdeUltimoObstaculo = 0.0f;
		GenerarYConfigurarObstaculo();
	}
}

FString AP_F_Nivel_Dificultad_NORMAL_CH::SeleccionarTipoDeNave() const
{
	int Tipo = FMath::RandRange(1, 3); // Selección aleatoria de tipo de nave
	switch (Tipo) {
	case 1: return TEXT("Nave_Enemiga_01");
	case 2: return TEXT("Nave_Enemiga_02");
	case 3: return TEXT("Nave_Enemiga_03");
	default: return TEXT("Nave_Enemiga_01");
	}
}

FString AP_F_Nivel_Dificultad_NORMAL_CH::SeleccionarTipoDeObstaculo() const
{
	int Tipo = FMath::RandRange(1, 3); // Selección aleatoria de tipo de obstáculo
	switch (Tipo) {
	case 1: return TEXT("Asteroide");
	case 2: return TEXT("Cometa");
	case 3: return TEXT("Mina_Galactica");
	default: return TEXT("Asteroide");
	}
}



ANAVE_ENEMIGA_P* AP_F_Nivel_Dificultad_NORMAL_CH::GenerarYConfigurarNave()
{
	ANAVE_ENEMIGA_P* NuevaNave = FABRICA_NAVES_B->Crear_Nave(SeleccionarTipoDeNave());
	if (NuevaNave) {
		Configurar_Vida_Naves(NuevaNave, CurrentVidaNaves);
		Configurar_Velocidad_Naves(NuevaNave, CurrentVelocidadNaves);
		Configurar_Danio_Disparo_Naves(NuevaNave, CurrentDanioDisparoNaves);
	}
	return NuevaNave;
}



AOBSTACULOS_ESPACIALES_P* AP_F_Nivel_Dificultad_NORMAL_CH::GenerarYConfigurarObstaculo()
{
	AOBSTACULOS_ESPACIALES_P* NuevoObstaculo = FABRICA_OBSTACULOS_B->Crear_Obstaculos(SeleccionarTipoDeObstaculo());
	if (NuevoObstaculo) {
		Configurar_Vida_Obstaculos(NuevoObstaculo, CurrentVidaObstaculos);
		Configurar_Danio_Obstaculos(NuevoObstaculo, CurrentDanioObstaculos);
		Configurar_Velocidad_Obstaculos(NuevoObstaculo, CurrentVelocidadObstaculos);
	}
	return NuevoObstaculo;
}


void AP_F_Nivel_Dificultad_NORMAL_CH::ConfigurarTodo(float VidaNaves, float VelocidadNaves, float DanioDisparoNaves, float VidaObstaculos, float DanioObstaculos, float VelocidadObstaculos)
{
	CurrentVidaNaves = VidaNaves;
	CurrentVelocidadNaves = VelocidadNaves;
	CurrentDanioDisparoNaves = DanioDisparoNaves;


	CurrentVidaObstaculos = VidaObstaculos;
	CurrentDanioObstaculos = DanioObstaculos;
	CurrentVelocidadObstaculos = VelocidadObstaculos;
}





void AP_F_Nivel_Dificultad_NORMAL_CH::Configurar_Vida_Naves(ANAVE_ENEMIGA_P* Nave, float Vida)
{
	if (Nave) {

		Nave->Set_Vida(Vida);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Red, TEXT("No se paso la vida de la nave "));
	}
}



void AP_F_Nivel_Dificultad_NORMAL_CH::Configurar_Velocidad_Naves(ANAVE_ENEMIGA_P* Nave, float Velocidad)
{
	if (Nave) {
		Nave->Set_Velocidad_Nave(Velocidad);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Red, TEXT("No se paso la velocidad de la nave "));
	}
}



void AP_F_Nivel_Dificultad_NORMAL_CH::Configurar_Danio_Disparo_Naves(ANAVE_ENEMIGA_P* Nave, float Danio_Disparo)
{
	if (Nave) 
	{
		Nave->Set_Danio_Disparo(Danio_Disparo);

	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Red, TEXT("No se paso el danio de la nave "));
	}
}



void AP_F_Nivel_Dificultad_NORMAL_CH::Configurar_Vida_Obstaculos(AOBSTACULOS_ESPACIALES_P* Obstaculo, float Vida)
{
	if (Obstaculo) {
		Obstaculo->Set_Vida_Obstaculos(Vida);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Red, TEXT("No se paso la vida del obstaculo "));
	}
}



void AP_F_Nivel_Dificultad_NORMAL_CH::Configurar_Danio_Obstaculos(AOBSTACULOS_ESPACIALES_P* Obstaculo, float Danio)
{
	if (Obstaculo) 
	{
		Obstaculo->Set_Danio_Obstaculos(Danio);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Red, TEXT("No se paso el danio del obstaculo "));

	}
}



void AP_F_Nivel_Dificultad_NORMAL_CH::Configurar_Velocidad_Obstaculos(AOBSTACULOS_ESPACIALES_P* Obstaculo, float Velocidad)
{
	if (Obstaculo) {
		Obstaculo->Set_Velocidad_Obstaculos(Velocidad);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Red, TEXT("No se paso la velocidad del obstaculo "));
	}
}


