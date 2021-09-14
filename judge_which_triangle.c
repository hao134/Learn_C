#include <stdio.h>
int main() {
    int side1, side2, side3;
    printf("Please enter the lengths: ");
    scanf("%d%d%d", &side1, &side2, &side3);
    if (side1 == side2 && side2 == side3 && side3 == side1 ) {
        printf("Regular triangle\n");
    }
    if (side1 == side2 || side2 == side3 || side3 == side1) {
        printf("Isosceles triangle\n");
    }
    if (side1 * side1 + side2 * side2 == side3 * side3 ||
        side2 * side2 + side3 * side3 == side1 * side1 ||
        side3 * side3 + side1 * side1 == side2 * side2) {
        printf("Rectangular triangle");
        }
    return 0;
}