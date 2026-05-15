#include <stdio.h>
int main() {
    int arr[5];
    int i;
    int max, min;
    printf("请输入5个整数：\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];
    for (i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("最大值：%d\n", max);
    printf("最小值：%d\n", min);
    return 0;
}