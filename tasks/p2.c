#include <stdio.h>

int main() {
    int year, choice;
    
    do {
        printf("\nEnter a year: ");
        scanf("%d", &year);
        
        printf("\nConvert to:\n");
        printf("1. Months\n");
        printf("2. Days\n");
        printf("3. Hours\n");
        printf("4. Minutes\n");
        printf("5. Seconds\n");
        printf("0. Exit\n");
        
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                printf("\n%d years is %d months\n", year, year * 12);
                break;
            case 2:
                printf("\n%d years is %d days\n", year, year * 12 * 30);
                break;
            case 3:
                printf("\n%d years is %d hours\n", year, year * 12 * 30 * 24);
                break;
            case 4:
                printf("\n%d years is %d minutes\n", year, year * 12 * 30 * 24 * 60);
                break;
            case 5:
                printf("\n%d years is %d seconds\n", year, year * 12 * 30 * 24 * 60 * 60);
                break;
            case 0:
                printf("\nExiting...\n");
                break;
            default:
                printf("\nInvalid choice. Please try again.\n");
        }
    } while(choice != 0);
    
    return 0;
}
