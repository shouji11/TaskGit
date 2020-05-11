#pragma once

class Vector2D
{
public:
	Vector2D();
	Vector2D(float x,float y);

	float Dot(const Vector2D &vec2d);

	float Close(const Vector2D &vec2d);

public:

	float x, y;

};