#include "GameOverScene.h"
#include "../Library/SceneManager.h"
#include <DxLib.h>

GameOverScene::GameOverScene()
{
}

GameOverScene::~GameOverScene()
{
}

void GameOverScene::Update()
{
    if (CheckHitKey(KEY_INPUT_P)) {
        // タイトルに戻る
        SceneManager::ChangeScene("TITLE");
    }
    if (CheckHitKey(KEY_INPUT_ESCAPE)) {
        // ゲーム終了
        SceneManager::Exit();
    }
}

void GameOverScene::Draw()
{
    DrawString(200, 200, "GAME OVER", GetColor(255, 0, 0));
    DrawString(180, 300, "Push [P] to return to TITLE", GetColor(255, 255, 255));
    DrawString(180, 340, "Push [ESC] to Exit", GetColor(255, 255, 255));
}
