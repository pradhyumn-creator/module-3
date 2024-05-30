#include <stdio.h>

double calculateCircumference(double side) {
    return 4 * side;
}

int main() {
    double side, circumference;

    printf("Enter the length of the side of the square: ");
    scanf("%lf", &side);

    
    circumference = calculateCircumference(side);

    
    printf("The circumference of the square is: %.2lf\n", circumference);

    return 0;
}
