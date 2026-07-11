#include "Judge.h"


Result Judge::compare(const Random& rand, const Input& input) {

	int rn[4];
	int in[4];

	rand.getValue(rn, 4);

	input.getValue(in, 4);

	// ヒット数を調べる
	bool isHit[4] = {};
	int hitNum = 0;
	for (int i = 0; i < 4; i++) {
		if (rn[i] == in[i]) {
			// ヒットしている
			hitNum++;
			isHit[i] = true;

		}
	}
	// ブロー数を調べる
	int blowNum = 0;
	for (int i = 0; i < 4; i++) {

		if (isHit[i]) {
			// 以降の処理をスキップ
			continue;
		}

		int inputNum = in[i];
		// rn 用のループ
		for (int j = 0; j < 4; j++) {
			if (isHit[i]) {
				// 以降の処理をスキップ
				continue;
			}
			if (rn[j] == inputNum) {
				blowNum++;
			}
		}	
	}

	// 結果を返すための変数を宣言
	Result res;
	res.hit_ = hitNum;
	res.blow_ = blowNum;
	res.isClear_ = (hitNum == 4);

	return res;
}
