#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;
    

    srand(time(0));
    number = rand() % 100 + 1; // ���� 1 �� 100 ֮��������

    printf("��ӭ������������Ϸ��\n");
    printf("���һ�� 1 �� 100 ֮������֣�\n");

    do {
        printf("��������Ĳ²�: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < number) {
            printf("̫С�ˣ�����һ�Ρ�\n");
        } else if (guess > number) {
            printf("̫���ˣ�����һ�Ρ�\n");
        } else {
            printf("��ϲ�㣡��¶��ˣ�\n");
            printf("���ܹ����� %d �Ρ�\n", attempts);
        }
    } while (guess != number);

    return 0;
}
