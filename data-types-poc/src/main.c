#include <stdio.h>

// Example of an enumeration type
// Enum gives names to integer constants for better readability
enum Weekday { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };

int main(void) {
    // Integer: stores whole numbers
    int age = 30;
    printf("int age = %d\n", age);

    // Float: stores decimal numbers with single precision (about 6 digits)
    float temperature = 36.5f;
    printf("float temperature = %.2f\n", temperature);

    // Double: stores decimal numbers with double precision (about 15 digits)
    double pi = 3.141592653589793;
    printf("double pi = %.15f\n", pi);

    // Char: stores a single character (1 byte)
    char initial = 'K';
    printf("char initial = %c\n", initial);
    printf("ASCII value of '%c' = %d\n", initial, initial);

    // Enum: a set of named integer constants
    enum Weekday today = WEDNESDAY;
    printf("enum Weekday today = %d (WEDNESDAY)\n", today);

    // Demonstrate enum in action
    if (today == WEDNESDAY) {
        printf("It's midweek! Keep going!\n");
    }

    // Show size of each type (in bytes)
    printf("\n=== Sizes of Data Types ===\n");
    printf("sizeof(int) = %zu bytes\n", sizeof(int));
    printf("sizeof(float) = %zu bytes\n", sizeof(float));
    printf("sizeof(double) = %zu bytes\n", sizeof(double));
    printf("sizeof(char) = %zu bytes\n", sizeof(char));
    printf("sizeof(enum Weekday) = %zu bytes\n", sizeof(enum Weekday));

    return 0;
}
