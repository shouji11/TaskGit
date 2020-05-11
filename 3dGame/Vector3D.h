#pragma once

class Vector3D
{
public:

	//�@�֐��E�R���X�g���N�^
	 Vector3D();

	 Vector3D(float x, float y, float z);

	 float Dot(const Vector3D &vec3);

	 float Close(const Vector3D &vec3);


public:
	//�I�y���[�^�[
	
	Vector3D operator+(const Vector3D &vec3);

	Vector3D operator-(const Vector3D &vec3);

	Vector3D operator*(const float & scale);


public:

	float x, y, z;

};
