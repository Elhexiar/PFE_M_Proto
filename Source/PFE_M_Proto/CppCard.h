// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CardStat.h"


/**
 * 
 */

class PFE_M_PROTO_API FCppCard
{
public:
	FCppCard();
	
	~FCppCard();

	

private:
	
	int32 Index;
	
	FString CardName;
	
	FCardStat CardStat;


public:
	
	int32 GetIndex() const
	{
		return Index;
	}

	void SetIndex(int32 NewIndex)
	{
		this->Index = NewIndex;
	}

	FString GetCardName() const
	{
		return CardName;
	}

	void SetCardName(const FString& NewCardName)
	{
		this->CardName = NewCardName;
	}

	FCardStat GetCardStat() const
	{
		return CardStat;
	}

	void SetCardStat(const FCardStat& NewCardStat)
	{
		this->CardStat = NewCardStat;
	}
	
	
};
