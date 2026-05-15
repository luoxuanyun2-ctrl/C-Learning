#include <stdio.h>
int main() {
    int i;
    int oddSum = 0;
    int evenSum = 0;
    for (i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            evenSum += i;
        }
        else {
            oddSum += i;
        }
    }
    printf("1到100之间偶数和：%d\n", evenSum);
    printf("1到100之间奇数和：%d\n", oddSum);
    return 0;
}