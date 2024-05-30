#include <stdio.h>

// Function to calculate the perimeter of a triangle
double calculatePerimeter(double a, double b, double c) {
    return a + b + c;
}

int main() {
    double a, b, c, perimeter;

    
    printf("Enter the length of side a: ");
    scanf("%lf", &a);
    printf("Enter the length of side b: ");
    scanf("%lf", &b);
    printf("Enter the length of side c: ");
    scanf("%lf", &c);

    
    perimeter = calculatePerimeter(a, b, c);

   
    printf("The perimeter of the triangle is: %.2lf\n", perimeter);

    return 0;
}
