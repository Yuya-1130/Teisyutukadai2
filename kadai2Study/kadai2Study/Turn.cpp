#include "Turn.h"

// ターンを実行する
bool Turn::exec(std::shared_ptr<Character> player,
	std::shared_ptr<Character>* enemies, int enemyNum) {

	player->setAttack();

	for (int i = 0; i < enemyNum; i++) {
		enemies[i]->setAttack();
	}

	// プライヤーが生き残ったいる敵を探して攻撃する
	int targetEnemyIndex = 0;
	for (int i = 0; i < enemyNum; i++) {
		if (!enemies[i]->isDead()) {
			targetEnemyIndex = i;
			break;
		}
	}
	// プレイヤーの攻撃（攻撃取得）
	int playerPower = player->attack();
	// 生き残っている敵のダメージ関数を呼び出す
	enemies[targetEnemyIndex]->damage(playerPower);

}
