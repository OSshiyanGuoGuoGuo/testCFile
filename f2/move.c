#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    int choice;

    printf("温度转换器\n");
    printf("1. 摄氏转华氏\n");
    printf("2. 华氏转摄氏\n");
    printf("请选择转换类型 (1 或 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        // 摄氏转华氏
        printf("请输入摄氏温度: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("华氏温度: %.2f\n", fahrenheit);
    } else if (choice == 2) {
        // 华氏转摄氏
        printf("请输入华氏温度: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5 / 9;
        printf("摄氏温度: %.2f\n", celsius);
    } else {
        printf("无效的选择，请输入 1 或 2。\n");
    }

    return 0;
}
