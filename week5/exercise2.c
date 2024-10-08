#include <stdio.h>

int main() {
    int mm, dd, yyyy;
    int earliestMM = 0, earliestDD = 0, earliestYYYY = 0;
    int firstDate = 1;  // To track if this is the first date entered

    do {
        // Get date from the user
        printf("Enter a date (mm/dd/yyyy): ");
        scanf("%d/%d/%d", &mm, &dd, &yyyy);

        // Check if the user entered "0/0/0" to quit
        if (mm == 0 && dd == 0 && yyyy == 0) {
            break;
        }

        // Check for valid dates (optional: refine this to validate day ranges per month)
        if (mm < 1 || mm > 12 || dd < 1 || dd > 31) {
            printf("Invalid date. Try again.\n");
            continue;  // Skip this loop iteration for invalid dates
        }

        // Compare dates to find the earliest
        if (firstDate || yyyy < earliestYYYY || (yyyy == earliestYYYY && mm < earliestMM) || (yyyy == earliestYYYY && mm == earliestMM && dd < earliestDD)) {
            earliestMM = mm;
            earliestDD = dd;
            earliestYYYY = yyyy;
            firstDate = 0;  // No longer the first date
        }

    } while (1);

    if (firstDate) {
        printf("No dates entered.\n");
    } else {
        printf("The earliest valid date is %d/%d/%d.\n", earliestMM, earliestDD, earliestYYYY);
    }

    return 0;
}
