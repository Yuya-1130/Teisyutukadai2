#pragma once

//	ランダム値生成クラス
class Random
{
public:
	// ランダムな値を生成する
	void generate();

	// 持っている情報をほかに教える
	void getValue(int* v, int size)const;

private:

	int value_[4]; // 0～9 までの ４ つの値

};

