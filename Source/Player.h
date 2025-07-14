#pragma once
#include "Object2D.h"

class Player : public Object2D {
public:
	Player();
	Player(VECTOR2 pos);
	~Player();
	void Update() override;
	void Draw() override;
private:
	float velocityY;
	bool onGround;
	bool prevPushed;

	float Gravity;
	float JumpHeight;
	float JumpV0;
	float moveSpeed;
	int frame = 1;  // �����E = 0,1,2 �ɉ�����
	int srcX = frame * 64;
	int srcY = 64;  // �� �������̒i�i2�i�ځj

	bool isGameOver = false;

};