// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseWeapon.generated.h"

UCLASS()
class FPSTUTORIAL_API ABaseWeapon : public AActor
{
	GENERATED_BODY()
	
public:
	// 이 기본무기 액터의 속성에 대한 기본값을 설정.
	ABaseWeapon();

	//무기에 휴대할 수 있는 탄약의 총량.
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = Weapon)
		int maxTotalAmmo;

	//무기에 넣을 수 있는 탄약의 총량.
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = Weapon)
		int maxClipAmmo;

	//무기에 사용되는 탄약의 총량.
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = Weapon)
		int totalAmmo;

	//무기의 탄약 수.
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = Weapon)
		int clipAmmo;

	//무기를 재장전하는 데 걸리는 시간.
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = Weapon)
		float reloadTime;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
