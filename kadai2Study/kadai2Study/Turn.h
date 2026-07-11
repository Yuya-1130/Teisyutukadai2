#pragma once
#include <memory>
#include "Character.h"

// リザルト情報
struct Result
{
	int turnCount_ = 0;          // 決着までのターン数
	int maxPlayerPower_ = 0;     // プレイヤーが与えた最大ダメージ値
	int maxEnemyPower_ = 0;      // 敵が与えた最大ダメージ値
};

// ターン制御
class Turn
{
	// ターンを実行する
	bool exec(std::shared_ptr<Character> player,
		      std::shared_ptr<Character>* enemies,int enemyNum);

private:
	Result result_; // リザルト情報
};

