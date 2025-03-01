// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InputAction.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Character.h"
#include "MyCharacter.generated.h"

class UInputMappingContext;
class USpringArmComponent;

UCLASS()
class KNIGHT_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyCharacter();

	UPROPERTY(EditAnywhere)
	TObjectPtr<UInputMappingContext>DefaultMappingContext;

	UPROPERTY(EditAnywhere,BlueprintReadOnly,category="Movement")
	float JumpVelocity=600.f;
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	void Jump();

	void Move(const FInputActionValue &Value);

	void Look(const FInputActionValue &Value);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
private:
	UPROPERTY(EditAnywhere,BlueprintReadOnly,meta=(AllowPrivateAccess="true"))
	TObjectPtr<UCameraComponent>CameraComponent;

	UPROPERTY(EditAnywhere,BlueprintReadOnly,meta=(AllowPrivateAccess="true"))
	TObjectPtr<USpringArmComponent>SpringArmComponent;

	UPROPERTY(EditAnywhere,BlueprintReadOnly,meta=(AllowPrivateAccess="true"))
	TObjectPtr<UInputAction>JumpAction;

	UPROPERTY(EditAnywhere,BlueprintReadOnly,meta=(AllowPrivateAccess="true"))
	TObjectPtr<UInputAction>MoveAction;

	UPROPERTY(EditAnywhere,BlueprintReadOnly,meta=(AllowPrivateAccess="true"))
	TObjectPtr<UInputAction>LookAction;

	
	

};

