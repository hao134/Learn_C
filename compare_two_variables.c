#include <stdio.h>
int main() {
    int a, b, c, max;
    printf("Please enter two integers: ");
    scanf("%d", &a);
    printf("Please enter the second integer: ");
    scanf("%d", &b);
    max = a;
    if (a < b) {
        max = b;
    }
    printf("The maximum is %d.\n", max);
    max = b;
}