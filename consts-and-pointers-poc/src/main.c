#include <stdio.h>

int main(void) {
    int a = 10;
    int b = 20;

    // Pointer to const (the VALUE cannot change via this pointer) ---
    const int *ptr_to_const = &a;
    printf("ptr_to_const points to a = %d\n", *ptr_to_const);

    // *ptr_to_const = 15; // Error: cannot modify the value through this pointer
    ptr_to_const = &b;     // But you can change what it points to
    printf("ptr_to_const now points to b = %d\n", *ptr_to_const);

    // --- Const pointer (the POINTER cannot change, but the VALUE can) ---
    int *const const_ptr = &a;
    printf("const_ptr points to a = %d\n", *const_ptr);

    *const_ptr = 30;       // Can modify the value through the pointer
    printf("a is now %d\n", a);

    // const_ptr = &b;     // Error: cannot make it point somewhere else

    // --- Const pointer to const value (neither can change) ---
    const int *const both_const = &b;
    printf("both_const points to b = %d\n", *both_const);

    // *both_const = 40;   // Cannot change value
    // both_const = &a;    // Cannot change address

    return 0;
}
