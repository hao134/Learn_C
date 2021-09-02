#include <stdio.h>

//1. always execute
//int main() {
//    int a = 3;
//    printf("a is larger than 4.\n");
//    return 0;
//}

//if
//int main(){
//    int a = 3;
//    if (a > 4) {
//        printf("a is larger than 4.\n");
//    }
//    return 0;
//}

// if 2
int main() {
    int a;
    printf("a= ");
    scanf("%d", &a);
    if (a > 4) {
        printf("a is larger than 4.\n");
    }
    return 0;
}