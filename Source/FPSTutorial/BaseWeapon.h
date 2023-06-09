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
	// �� �⺻���� ������ �Ӽ��� ���� �⺻���� ����.
	ABaseWeapon();

	//���⿡ �޴��� �� �ִ� ź���� �ѷ�.
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = Weapon)
		int maxTotalAmmo;

	//���⿡ ���� �� �ִ� ź���� �ѷ�.
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = Weapon)
		int maxClipAmmo;

	//���⿡ ���Ǵ� ź���� �ѷ�.
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = Weapon)
		int totalAmmo;

	//������ ź�� ��.
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = Weapon)
		int clipAmmo;

	//���⸦ �������ϴ� �� �ɸ��� �ð�.
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = Weapon)
		float reloadTime;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
