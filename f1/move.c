#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    int choice;

    printf("�¶�ת����\n");
    printf("1. ����ת����\n");
    printf("2. ����ת����\n");
    printf("��ѡ��ת������ (1 �� 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        // ����ת����
        printf("�����������¶�: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("�����¶�: %.2f\n", fahrenheit);
    } else if (choice == 2) {
        // ����ת����
        printf("�����뻪���¶�: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5 / 9;
        printf("�����¶�: %.2f\n", celsius);
    } else {
        printf("��Ч��ѡ�������� 1 �� 2��\n");
    }

    return 0;
}
