// C code
// Simple Calculator with Functions

#include <stdio.h>

// Function to calculate factorial (RECURSIVE)
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;  // Base case
    }
    return n * factorial(n - 1);  // Recursive call
}

// Function to calculate power (ITERATIVE)
int power(int base, int exp) {
    int result = 1;
    int i;
    for (i = 0; i < exp; i++) {
        result = result * base;
    }
    return result;
}

// Function to show menu (REUSABLE)
void showMenu() {
    printf("\n--- Calculator ---\n");
    printf("1. Factorial\n");
    printf("2. Power\n");
    printf("3. Exit\n");
}

// Function to get user choice (REUSABLE)
int getChoice() {
    int choice;
    printf("Enter choice: ");
    scanf("%d", &choice);
    return choice;
}

int main() {
    int choice, num, base, exp, result;
    
    do {
        showMenu();  // Call function
        choice = getChoice();  // Call function
        
        if (choice == 1) {
            printf("Enter number: ");
            scanf("%d", &num);
            result = factorial(num);  // Call recursive function
            printf("%d! = %d\n", num, result);
        }
        else if (choice == 2) {
            printf("Enter base: ");
            scanf("%d", &base);
            printf("Enter exponent: ");
            scanf("%d", &exp);
            result = power(base, exp);  // Call iterative function
            printf("%d^%d = %d\n", base, exp, result);
        }
        else if (choice == 3) {
            printf("Goodbye!\n");
        }
        else {
            printf("Invalid choice!\n");
        }
        
    } while (choice != 3);
    
    return 0;
}
