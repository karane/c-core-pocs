#include <stdio.h>

// 1. Using #define
// This is replaced before compilation (no type checking)
#define MAX_STUDENTS 30
#define PI 3.14159
#define SCHOOL_NAME "Green Valley High"

// 2. Using const (Typed constant variable)
const int MIN_AGE = 5;
const double TAX_RATE = 0.15;

int main(void) {
    printf("=== Using #define Constants ===\n");
    printf("Max students: %d\n", MAX_STUDENTS);
    printf("Pi value: %.5f\n", PI);
    printf("School name: %s\n", SCHOOL_NAME);

    printf("\n=== Using const Constants ===\n");
    printf("Minimum age: %d\n", MIN_AGE);
    printf("Tax rate: %.2f\n", TAX_RATE);

    // Uncommenting the next line will cause a compiler error:
    // MIN_AGE = 10; // Error: assignment of read-only variable

    double product_price = 100.0;
    double final_price = product_price + (product_price * TAX_RATE);
    printf("\nProduct price: %.2f\n", product_price);
    printf("Final price (with tax): %.2f\n", final_price);

    printf("\n=== Sizes ===\n");
    printf("sizeof(PI) (as double literal) = %zu bytes\n", sizeof(PI));
    printf("sizeof(TAX_RATE) = %zu bytes\n", sizeof(TAX_RATE));

    return 0;
}
