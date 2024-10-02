#include <stdio.h>

int main() {
    char operator;
    float num1, num2, result;

    printf("简单计算器\n");
    printf("请输入第一个数字: ");
    scanf("%f", &num1);
    
    printf("请输入运算符 (+, -, *, /): ");
    scanf(" %c", &operator);
    
    printf("请输入第二个数字: ");
    scanf("%f", &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.2f + %.2f = %.2f\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2f - %.2f = %.2f\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2f * %.2f = %.2f\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2f / %.2f = %.2f\n", num1, num2, result);
            } else {
                printf("错误：除数不能为零。\n");
            }
            break;
        default:
            printf("无效的运算符。\n");
            break;
    }

    return 0;
}
