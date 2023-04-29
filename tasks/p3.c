#include <stdio.h>

#define PI 3.14

int main() {
    int radius;

    printf("Enter the radius:\n");
    scanf("%d", &radius);

    int diameter = radius * 2;
    printf("The diameter is: %d\n", diameter);

    float circumference = 2 * PI * radius;
    printf("The circumference is: %.2f\n", circumference);

    float area = PI * radius * radius;
    printf("The area is: %.2f\n", area);

    return 0;
}
