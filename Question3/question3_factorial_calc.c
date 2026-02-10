#include <stdio.h>

// Recursive 
int factorial(int n) {
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

// Reusable 
int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++)
        result *= base;
    return result;
}

// Reusable menu 
void showMenu() {
    printf("\n--- Calculator ---\n");
    printf("1. Factorial \n");
    printf("2. Power \n");
    printf("3. Exit\n");
}

int main() {
    int choice, num, base, exp;

    do {
        showMenu();                 // reusing function
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter number: ");
            scanf("%d", &num);
            printf("%d! = %d\n", num, factorial(num));
        }
        else if (choice == 2) {
            printf("Enter base: ");
            scanf("%d", &base);
            printf("Enter exponent: ");
            scanf("%d", &exp);
            printf("%d^%d = %d\n", base, exp, power(base, exp));
        }

    } while (choice != 3);

    return 0;
}

