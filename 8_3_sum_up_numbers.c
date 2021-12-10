#include <stdio.h>
int main() {
    int number;
    int sum;
    sum = 0;
    printf("please enter the number (0: quit):\n");
    scanf("%d",&number);
    while (number != 0){
        sum += number;
        scanf("%d",&number);
    }
    printf("sum is %d. \n", sum);
    return 0;
}