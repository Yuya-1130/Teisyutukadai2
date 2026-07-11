#include "Random.h"
#include "Input.h"
#include "Judge.h"
#include "DispResult.h"
#include "Result.h"
#include <iostream>


int main()
{
    Random random;
    Input input;
    Judge judge;
    DispResult dispResult;

    // ランダムな値を決める
    random.generate();

    // ゲームループ
    while (true){
        // 入力値を設定
        input.set();

        // 判定
       Result res = judge.compare(random, input);

       // 結果を表示する
       dispResult.disp(res);

       // クリアしていたらゲームループを抜ける
       if (res.isClear_) {
           break;
       }

    }
}

