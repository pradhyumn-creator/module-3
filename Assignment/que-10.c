#include <stdio.h>

// Function to calculate the surface area of a rectangular prism
double calculateSurfaceArea(double w, double h, double l) {
    return 2 * (w * l + h * l + h * w);
}

int main() {
    double w, h, l, surfaceArea;

    
    printf("Enter the width of the rectangular prism: ");
    scanf("%lf", &w);
    printf("Enter the height of the rectangular prism: ");
    scanf("%lf", &h);
    printf("Enter the length of the rectangular prism: ");
    scanf("%lf", &l);

    surfaceArea = calculateSurfaceArea(w, h, l);

    printf("The surface area of the rectangular prism is: %.2lf\n", surfaceArea);

    return 0;
}
