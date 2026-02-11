// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPawn.h"

AMyPawn::AMyPawn()
{
 	PrimaryActorTick.bCanEverTick = true;

}

void AMyPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

void AMyPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//입력 관련된 기능들을 여기에 추가.
void AMyPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

