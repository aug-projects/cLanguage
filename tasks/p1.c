#include <stdio.h>

int main() {
    int number, steps = 0;
    
    printf("Enter a positive integer: ");
    if (scanf("%d", &number) != 1 || number <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }
    
    while (number != 1) {
        if (number % 2 == 0) {
            number /= 2;
        } else {
            number = number * 3 + 1;
        }
        printf("The next number is %d\n", number);
        steps++;
    }
    
    printf("Steps required to reach 1: %d\n", steps);
    return 0;
}
