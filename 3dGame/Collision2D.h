#pragma once
#include"Vector2D.h"

class Collision2D
{
public:
	Collision2D();
	~Collision2D();


	bool CircleCollision(const Vector2D& centerA, int radiusA,
		const Vector2D& centerB, int radiusB);



};