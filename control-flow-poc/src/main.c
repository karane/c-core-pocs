#include <stdio.h>

int main(void) {
    int number;

    // IF, ELSE IF, ELSE
    printf("Enter a number (1-3) to test if/else: ");
    scanf("%d", &number);

    if (number == 1) {
        printf("You entered one.\n");
    } else if (number == 2) {
        printf("You entered two.\n");
    } else {
        printf("You entered something else.\n");
    }

    // SWITCH
    printf("\nSwitch statement example: \n");
    switch (number) {
        case 1:
            printf("Switch: One\n");
            break;
        case 2:
            printf("Switch: Two\n");
            break;
        case 3:
            printf("Switch: Three\n");
            break;
        default:
            printf("Switch: Other number\n");
    }

    // FOR LOOP
    printf("\nFor loop example (0 to 4):\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // WHILE LOOP
    printf("\nWhile loop example (5 down to 1):\n");
    int j = 5;
    while (j > 0) {
        printf("%d ", j);
        j--;
    }
    printf("\n");

    // DO-WHILE LOOP
    printf("\nDo-while loop example (print 0 once even if condition false):\n");
    int k = 0;
    do {
        printf("%d ", k);
        k++;
    } while (k < 0); // will run once
    printf("\n");

    // BREAK AND CONTINUE
    printf("\nBreak and continue example (1-5, skip 3, stop at 4):\n");
    for (int n = 1; n <= 5; n++) {
        if (n == 3) continue; // skip number 3
        if (n == 4) break;    // stop loop at 4
        printf("%d ", n);
    }
    printf("\n");

    // GOTO
    printf("\nGoto example:\n");
    int x = 1;
    goto skip;
    x = 10; // this line will be skipped
skip:
    printf("Value of x after goto: %d\n", x);

    return 0;
}
