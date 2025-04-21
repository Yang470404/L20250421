#pragma once
#include "Vector2D.h"

class AActor
{
public:
	AActor();
	virtual ~AActor();

	virtual void Tick();

	void AddActorWorldOffset(FVector2D Delta); //��ȭ�� delta

protected:
	FVector2D Location;
};

