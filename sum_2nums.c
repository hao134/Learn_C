#include <stdio.h>

int main() {
    // Write C code here
    int integer1;
    int integer2;
    int sum;
    printf("Please enter the first integer: ");
    scanf("%d", &integer1);
    printf("please enter the second intefer: ");
    scanf("%d", &integer2);
    sum = integer1 + integer2;
    printf("Sum is %d. \n", sum);
    
    return 0;
}