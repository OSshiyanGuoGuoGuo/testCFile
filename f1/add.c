#include <stdio.h>

float calculateAverage(int arr[], int size);

int main() {
    int numbers[5];
    int i;

    printf("请输入5个整数:\n");
    for (i = 0; i < 5; i++) {
        printf("第 %d 个整数: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    float average = calculateAverage(numbers, 5);
    printf("数组的平均值是: %.2f\n", average);

    return 0;
}


float calculateAverage(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (float)sum / size;
}
