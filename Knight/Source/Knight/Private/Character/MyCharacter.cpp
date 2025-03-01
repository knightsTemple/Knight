// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/MyCharacter.h"

#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AMyCharacter::AMyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SpringArmComponent=CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));
	SpringArmComponent->SetupAttachment(RootComponent);
	SpringArmComponent->TargetArmLength=300.f;
	SpringArmComponent->bUsePawnControlRotation=true;
	SpringArmComponent->SetRelativeLocation(FVector(0,0,50));
	
	CameraComponent=CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
	CameraComponent->SetupAttachment(SpringArmComponent);
	

	GetCharacterMovement()->bOrientRotationToMovement=true;
	bUseControllerRotationYaw=false;
	bUseControllerRotationPitch=false;
	bUseControllerRotationRoll=false;

	GetCharacterMovement()->JumpZVelocity=JumpVelocity;
}

void AMyCharacter::Jump()
{
	Super::Jump();
	Jump();
	
}

void AMyCharacter::Move(const FInputActionValue &Value)
{
	FVector2D MoveValue=Value.Get<FVector2D>();
	FRotator Direction=UGameplayStatics::GetPlayerController(this,0)->GetControlRotation();
	FRotator YawRotation(0,Direction.Yaw,0);

	FVector ForwardDirection=YawRotation.Quaternion().GetForwardVector();
	FVector RightDirection=YawRotation.Quaternion().GetRightVector();
	
	AddMovementInput(RightDirection,MoveValue.X);
	AddMovementInput(ForwardDirection,MoveValue.Y);
	
}

void AMyCharacter::Look(const FInputActionValue& Value)
{
	FVector2D LookValue=Value.Get<FVector2D>();
	AddControllerYawInput(-LookValue.X);
	AddControllerPitchInput(LookValue.Y);
}

// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (APlayerController* PC=Cast<APlayerController>(GetController()))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem=ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PC->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext,0);
		}
	}
    if (UEnhancedInputComponent * EnhancedInputComponent=Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInputComponent->BindAction(JumpAction,ETriggerEvent::Started,this,&AMyCharacter::Jump);
    	EnhancedInputComponent->BindAction(MoveAction,ETriggerEvent::Triggered,this,&AMyCharacter::Move);
    	EnhancedInputComponent->BindAction(LookAction,ETriggerEvent::Triggered,this,&AMyCharacter::Look);
	}
}

