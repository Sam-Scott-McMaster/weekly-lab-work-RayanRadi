#include <stdio.h>

int main() {
    int days, startDay;

    // Get user input for the number of days in the month and the start day
    printf("How many days this month? ");
    scanf("%d", &days);
    
    printf("What is the starting day (1=Monday, 7=Sunday)? ");
    scanf("%d", &startDay);

    // Print the days of the week header
    printf("M T W T F S S\n");

    // Print leading spaces based on the starting day
    for (int i = 1; i < startDay; i++) {
        printf("  ");  // Print two spaces for each empty day
    }

    // Print the days of the month
    for (int day = 1; day <= days; day++) {
        printf("%2d ", day);  // Print each day with a width of 2 for alignment
        
        // Move to the next line after printing Sunday
        if ((day + startDay - 1) % 7 == 0) {
            printf("\n");
        }
    }
    printf("\n");

    return 0;
}
