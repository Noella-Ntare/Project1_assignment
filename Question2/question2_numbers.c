// C code
// Simple Menu Program

#include <stdio.h>

int main() {
    int choice, num, i, sum;
    char again;
    
    do {
        // the menu
        printf("\n--- MENU ---\n");
        printf("1. Sum of numbers\n");
        printf("2. Even numbers\n");
        printf("3. Multiplication table\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        
        if (choice == 1) {
            // Sum 
            printf("Enter a number: ");
            scanf("%d", &num);
            sum = 0;
            for (i = 1; i <= num; i++) {
                sum = sum + i;
            }
            printf("Sum = %d\n", sum);
        }
        else if (choice == 2) {
            //even numbers
            printf("Enter a number: ");
            scanf("%d", &num);
            printf("Even numbers: ");
            for (i = 1; i <= num; i++) {
                if (i % 2 != 0) {
                    continue;  // Skip the odd numbers
                }
                printf("%d ", i);
            }
            printf("\n");
        }
        else if (choice == 3) {
            // Multiplication table
            printf("Enter a number: ");
            scanf("%d", &num);
            for (i = 1; i <= 10; i++) {
                printf("%d x %d = %d\n", num, i, num * i);
            }
        }
        else if (choice == 4) {
            printf("Goodbye!\n");
            break;  // Exit the loop
        }
        else {
            printf("Invalid choice!\n");
        }
        
        if (choice != 4) {
            printf("\nContinue? (y/n): ");
            scanf(" %c", &again);
        }
        
    } while (again == 'y' || again == 'Y');
    
    return 0;
}
