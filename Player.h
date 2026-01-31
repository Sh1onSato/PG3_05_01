#pragma once

#include "math/Vector2.h"

using namespace KamataEngine;

class Player {

private:

	Vector2 position_;

	float speed_ = 2.0f;

public:

	void Initialize();

	void Update();

	void Draw();

	/// 右移動
	void MoveRight();

	/// 左移動
	void MoveLeft();
};