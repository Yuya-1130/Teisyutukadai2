#pragma once

// 数値を保持するクラス
class Number{

public:
	// 持っている情報を他に教える
	void getValue(int* v, int size)const;

protected:
	int value_[4]; // 0～９までの 4 つの値
};