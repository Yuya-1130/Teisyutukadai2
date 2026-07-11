#include "DispResult.h"
#include <iostream>

// 判定結果を受けとって表示する

void DispResult::disp(const Result& res) {

	std::cout << "結果 ------------------" << std::endl;

	std::cout << "hit:" << res.hit_ << std::endl;
	std::cout << "blow:" << res.blow_ << std::endl;

	if (res.isClear_) {
		std::cout << "ゲームクリア" << std::endl;
	}
}