#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <Novice.h>

// ゲームオブジェクトを表すクラス
class GameObject {
public:
	float x, y;   
	float speed;  

	GameObject(float x, float y, float speed);
	void Draw() const; // オブジェクトの描画
};

#endif