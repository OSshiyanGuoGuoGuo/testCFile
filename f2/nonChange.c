#include <stdio.h>

int main() {
    char operator;
    float num1, num2, result;

    printf("�򵥼�����\n");
    printf("�������һ������: ");
    scanf("%f", &num1);
    
    printf("����������� (+, -, *, /): ");
    scanf(" %c", &operator);
    
    printf("������ڶ�������: ");
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
                printf("���󣺳�������Ϊ�㡣\n");
            }
            break;
        default:
            printf("��Ч���������\n");
            break;
    }

    return 0;
}
