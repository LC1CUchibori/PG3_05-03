#include "Scene.h"

Scene::Scene() {}

void Scene::Init(){
	inputHandler_ = new /*��*/;

	inputHandler_->/*�������O�̊֐����̂P��*/();
	inputHandler_->/*�������O�̊֐����̂Q��*/();

	player_ = new Player();
	player_->Init();
}

void Scene::Update(){
	iCommand_ = inputHandler_->HandleInput();

	if (/*��iCommand��Null�łȂ����*/_) {
		iCommand_->/*�R�}���h�����s��*/(*player_);
	}

	player_->Update();
}

void Scene::Draw(){
	player_->Draw();
}
