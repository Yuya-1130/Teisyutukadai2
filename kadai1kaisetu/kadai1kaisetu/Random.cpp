#include "Random.h"

#include <stdlib.h>
#include <time.h>

// ランダムな値を生成する
void Random::generate() {
	srand((unsigned int)time(NULL));

	// ４桁のランダムな数を生成して、情報に設定する
	for (int i = 0; i < 4; i++) {

		value_[i] = rand() % 10;
	
		// Value_[i] がすでに過去出ているかどうかをチェック
		for (int j = 0; j < i; j++) {

			// これまですでに使われている場合、value_[i] はやり直さないといけない
			if (value_[j] == value_[i]) {
				i--;
				break;
			}
		}

	}
}

// 持っている情報をほかに教える
void Random::getValue(int* v, int size)const {
	// v はすでに外で配列として宣言されている、その先頭アドレスが入る
	// size は入れるの要素が入っている

	for (int i = 0; i < size && i < 4; i++) {
		v[i] = value_[i];
			
	}

}