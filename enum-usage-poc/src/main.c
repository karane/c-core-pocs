#include <stdio.h>

// Define an enum to represent days of the week
enum Day {
    SUNDAY,     // 0
    MONDAY,     // 1
    TUESDAY,    // 2
    WEDNESDAY,  // 3
    THURSDAY,   // 4
    FRIDAY,     // 5
    SATURDAY    // 6
};

// Function that returns a string for each day
const char* getDayName(enum Day day) {
    switch (day) {
        case SUNDAY: return "Sunday";
        case MONDAY: return "Monday";
        case TUESDAY: return "Tuesday";
        case WEDNESDAY: return "Wednesday";
        case THURSDAY: return "Thursday";
        case FRIDAY: return "Friday";
        case SATURDAY: return "Saturday";
        default: return "Invalid day";
    }
}

int main() {
    // Declare an enum variable
    enum Day today = WEDNESDAY;

    printf("Today is %s (%d)\n", getDayName(today), today);

    // Loop through all days
    printf("\nAll days of the week:\n");
    for (enum Day d = SUNDAY; d <= SATURDAY; d++) {
        printf(" - %s (%d)\n", getDayName(d), d);
    }

    // Compare enum values
    if (today == WEDNESDAY) {
        printf("\nIt's midweek! Keep going!\n");
    }

    // You can also assign custom values
    enum Status {
        OK = 200,
        NOT_FOUND = 404,
        SERVER_ERROR = 500
    };

    enum Status response = NOT_FOUND;
    printf("\nHTTP status: %d\n", response);

    return 0;
}
