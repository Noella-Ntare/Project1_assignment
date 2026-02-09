// C code
// Simple Circle Calculator

#include <stdio.h>

int main() {
    float radius, area, circumference;
    float PI = 3.14;
    
    printf("Enter radius: ");
    scanf("%f", &radius);
    
    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    
    printf("Area: %.2f\n", area);
    printf("Circumference: %.2f\n", circumference);
    
    return 0;
}
