#include <stdio.h>

int main() {
    int choice, n, i, sum;
    
    while (1) {  // Repetition
        
        // prompt user to choose
        printf("\n--- MENU ---\n");
        printf("1. Sum of numbers\n");
        printf("2. Even numbers\n");
        printf("3. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);
        
        
        if (choice == 1) {
            // Sum from 1 to N
            printf("Enter Number: ");
            scanf("%d", &n);
            sum = 0;
            for (i = 1; i <= n; i++) {
                sum = sum + i;
            }
            printf("Sum = %d\n", sum);
        }
        else if (choice == 2) {
            // Print even numbers
            printf("Enter N: ");
            scanf("%d", &n);
            printf("Even: ");
            for (i = 1; i <= n; i++) {
                if (i % 2 != 0) {
                    continue; 
                }
                printf("%d ", i);
            }
            printf("\n");
        }
        else if (choice == 3) {
            // Exit program
            printf("Goodbye!\n");
            break; 
        }
        else {
            printf("Invalid!\n");
        }
    }
    
    return 0;
}
