#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;
    

    srand(time(0));
    number = rand() % 100 + 1; // 生成 1 到 100 之间的随机数

    printf("欢迎来到猜数字游戏！\n");
    printf("请猜一个 1 到 100 之间的数字：\n");

    do {
        printf("请输入你的猜测: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < number) {
            printf("太小了！再试一次。\n");
        } else if (guess > number) {
            printf("太大了！再试一次。\n");
        } else {
            printf("恭喜你！你猜对了！\n");
            printf("你总共猜了 %d 次。\n", attempts);
        }
    } while (guess != number);

    return 0;
}
