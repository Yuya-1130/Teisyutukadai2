#pragma once

#include "Number.h"
#include "Result.h"

// 比較するクラス
class Judge
{

public:
	// ランダム値と入力値の情報を受け取り、比較して結果に渡す
	Result compare(const Number& rand, const Number& input);
	
	
private:

	int count_; // 比較した回数

};

