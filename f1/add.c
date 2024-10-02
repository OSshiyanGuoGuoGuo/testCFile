#include <stdio.h>

float calculateAverage(int arr[], int size);

int main() {
    int numbers[5];
    int i;

    printf("������5������:\n");
    for (i = 0; i < 5; i++) {
        printf("�� %d ������: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    float average = calculateAverage(numbers, 5);
    printf("�����ƽ��ֵ��: %.2f\n", average);

    return 0;
}


float calculateAverage(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (float)sum / size;
}
