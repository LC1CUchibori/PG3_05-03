#ifndef INPUTHANDLER_H
#define INPUTHANDLER_H

#include "ICommand.h"

// 入力処理を管理するクラス
class InputHandler {
private:
	Command* LeftCommand_;
	Command* RightCommand_;

public:
	InputHandler(Command* left, Command* right);
	Command* HandleInput(const char* keys); 
};

#endif