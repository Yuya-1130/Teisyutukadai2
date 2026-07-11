#pragma once
#include "Input.h"
#include "Number.h"

// 入力値を保持するクラス
class Input : public Number
{
public:
	// 値を入力する　and 入力した値を設定する
	void set();

//	// 入力した値をほかに教える
//	void getValue(int* v, int size)const;
//	
//private:
//
//	int value_[4]; // 入力した ４ つの値
};

