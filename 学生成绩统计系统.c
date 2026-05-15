#include <stdio.h>
int main() {
    int scores[5];
    int i;
    int sum = 0;
    int max, min;
    float average;
    printf("请输入5位学生的成绩：\n");
    for (i = 0; i < 5; i++) {
        printf("第%d位学生成绩：", i + 1);
        scanf("%d", &scores[i]);
        sum += scores[i];
        if (i == 0) {
            max = scores[i];
            min = scores[i];
        }
        else {
            if (scores[i] > max) {
                max = scores[i];
            }
            if (scores[i] < min) {
                min = scores[i];
            }
        }
    }
    average = sum / 5.0;
    printf("\n===== 成绩统计结果 =====\n");
    printf("总分：%d\n", sum);
    printf("平均分：%.2f\n", average);
    printf("最高分：%d\n", max);
    printf("最低分：%d\n", min);
    return 0;
}