#include "Input.h"
#include <iostream>


void Input::set() {

	for (int i = 0; i < 4; i++) {
		std::cout << i << "番の数値を入力：";
		std::cin >> value_[i];
	}


}

// 持っている情報をほかに教える
void Input::getValue(int* v, int size)const {
	// v はすでに外で配列として宣言されている、その先頭アドレスが入る
	// size は入れるの要素が入っている

	for (int i = 0; i < size && i < 4; i++) {
		v[i] = value_[i];

	}

}