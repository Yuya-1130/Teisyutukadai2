
#include <iostream>
#include <random>
#include <vector>

// ランダム値を生成して保持するクラス
class Random {
private:
    // ランダムの箱
    int answer[4];

public:
    // ランダム生成
    void random() {
        srand(time(0));
        for (int i = 0; i < 4; i++)
        {
            answer[i] = rand() % 10;
        }
    }
    int getNumber(int index) {
        return answer[index];
}
};

// 入力値を保持するクラス
class Input {
public:
    int inputs[4];

public:
    void count() {

        std::cout << "四つの数字を入力：";

        for (int i = 0; i < 4; i++) {

            std::cin >> inputs[i];
        }
    }

    int getNumber(int index) {
        return inputs[index];
    }
};

// 判定結果は専用の構造体を用意
struct Result {
    int hit;
    int blow;
    
};

// ランダム値と入力値を比較し保持クラス
class Compare {
private:
    Result result;

public:
    // ランダムと入力値の情報はアドレスで受け取る
    void jage(Random* ran, Input* inp) {
        result.hit = 0;
        result.blow = 0;

        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                
                if (ran->getNumber(i) == inp->getNumber(j)) {
                    // ヒット
                    if (i == j) {
                        result.hit++;
                    }
                    else {
                        result.blow++;
                    }
                }
            }
        }
    }
    
    

};

// 判定結果変数の参照を受け取って表示するクラス
class Reference {
public:
    void print(const Result& r) {
        std::cout << "結果" << r.hit << "ヒット　" << r.blow << "ブロー　" << std::endl;
    }
};

int main()
{
    Random rand;
    rand.random(); 

    Input input;
    Compare compare;
    Reference ref;

    int trun = 1;
    bool gameClear = false;

    while (!gameClear) {

        input.count();

        Result r = compare.jage(&rand, &input);

        ref.print(r);

        if (r.hit == 4) {
            gameClear = true;
            std::cout << "ゲームクリア！" << std::endl;
        }

    }
    return 0;
}

