#include <stdio.h>
int main() {
    int sum=1;
    int i;
    for (i = 2; i <= 100; i++){
        sum = sum + i;
    }
    printf("%d\n",sum);
}