#include <stdio.h>
/*
id  name
2   John
3   John
4   John
13  Mary
16  Amy
*/
int main() {
    int id;
    printf("ID: ");
    scanf("%d", &id);
    switch(id) {
        case 2:
        case 3:
        case 4:
            printf("John \n");
            break;
        case 13:
            printf("Mary \n");
            break;
        case 16:
            printf("Amy \n");
            break;
        default:
            printf("Not found\n");
    }
}