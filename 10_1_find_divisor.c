#include <stdio.h>
int main() {
    int N;
    printf("N = ?\n");
    scanf("%d",&N);
    int i;
    for (i=1; i<=N; i++){
        if (N%i ==0){
            printf("%d\n",i);
        }
    }
    return 0;

}