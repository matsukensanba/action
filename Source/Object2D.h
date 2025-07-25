#pragma once
#include "../Library/GameObject.h"

struct VECTOR2 {
	float x, y;
	VECTOR2() { x = 0; y = 0; }
	VECTOR2(float _x, float _y) { x = _x; y = _y; }
};
inline VECTOR2 operator -(VECTOR2 a, VECTOR2 b) {
	VECTOR2 r;
	r.x = a.x - b.x;
	r.y = a.y - b.y;
	return r;
}

inline VECTOR2 operator +(VECTOR2 a, VECTOR2 b) {
	VECTOR2 r;
	r.x = a.x + b.x;
	r.y = a.y + b.y;
	return r;
}

inline float VSize(VECTOR2 v) {
	return sqrtf(v.x * v.x + v.y * v.y);
}

class Object2D : public GameObject {
public:
	Object2D();
	virtual ~Object2D();
	virtual void Update() override;
	virtual void Draw() override;
	VECTOR2 GetPosition() { return position; }
protected:
	int hImage; // 画像を読むため
	int anim; // 絵の場所
	int animY; // 絵の場所
	VECTOR2 position; // 座標
	VECTOR2 imageSize; // １つの絵の大きさ
};