#include <stdio.h>
int main() {
    int a, b, c, mid;
    printf("please enter three integers: ");
    scanf("%d%d%d",&a,&b,&c);
    mid = a;
    if (a <= b && b <= c || c <= b && b <= a){
        mid = b;
    }
    if (a <= c && c <= b || b <= c && c <= a){
        mid = c;
    }
    printf("The median is: %d\n", mid);
}