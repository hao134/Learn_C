#include <stdio.h>
int main() {
    int number;
    int sum = 0;
    int count = 0;
    float average;
    printf("please enter the numbers (0:quit):\n");
    scanf("%d", &number);
    if (number == 0){
        printf("The answer is None\n");
        return 0;
    }
    while (number != 0) {
        sum += number;
        count += 1;
        scanf("%d", &number);
    }
    average = (float) sum / count;
    printf("The average is %f\n",average);
    return 0;
}