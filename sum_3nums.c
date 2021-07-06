#include <stdio.h>

// first way more ram loading, less cpu

//int main() {
//    int integer1, integer2, integer3, sum;
//    printf("Please enter the first integer: ");
//    scanf("%d", &integer1);
//    printf("please enter the second integer: ");
//    scanf("%d", &integer2);
//    printf("please enter the third integer: ");
//    scanf("%d", &integer3);
//    sum = integer1 + integer2 + integer3;
//    printf("Sum is %d. \n", sum);
//
//    return 0;
//}

// second way more cpu loading, less ram

int main() {
    int integer, sum;
    printf("please enter the first integer: ");
    scanf("%d", &integer);
    sum = integer;
    printf("Please enter the second integer: ");
    scanf("%d", &integer);
    sum = sum + integer;
    printf("Please enter the third integer: ");
    scanf("%d", &integer);
    sum = sum + integer;
    printf("Sum is %d. \n",sum);

    return 0;
}