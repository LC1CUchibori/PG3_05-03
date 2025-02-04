#include "InputHandler.h"
#include <Novice.h>

// コンストラクタ
InputHandler::InputHandler(Command* left, Command* right)
	: LeftCommand_(left), RightCommand_(right) {
}

// 入力処理
Command* InputHandler::HandleInput(const char* keys) {
	if (keys[DIK_A]) {
		return LeftCommand_; 
	}
	else if (keys[DIK_D]) {
		return RightCommand_; 
	}
	return nullptr; 
}