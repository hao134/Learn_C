#include <stdio.h>
int main(){
    int answer = 30;
    int guess;
    printf("Please enter the guessed number:\n");
    scanf("%d",&guess);
    while (guess != answer) {
        if (guess > answer){
            printf("guessed number is bigger than answer");
        } else {
            printf("guessed number is smaller than answer");
        }
        printf("Please enter the guessed number:\n");
        scanf("%d", &guess);
    }

    printf("correct anser\n");

    return 0;
}