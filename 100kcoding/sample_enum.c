#include <stdio.h>

typedef enum Day {
   MONDAY,
   TUESDAY,
   WEDNESDAY,
   THURSDAY,
   FRIDAY
} Day;

int main() {

   Day today = WEDNESDAY;

    // Array of strings
    char *dayNames[] = {
        "MONDAY",
        "TUESDAY",
        "WEDNESDAY",
        "THURSDAY",
        "FRIDAY"
    };

    // Print enum name
    printf("%s\n", dayNames[today]);

    return 0;
}