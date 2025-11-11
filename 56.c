#include <stdio.h>

int main() {
    char time[10];
    int hh, mm, ss;

    printf("Enter time in HH:MM:SS format: ");
    scanf("%s", time);

    // Extract hours, minutes, seconds from string
    if (sscanf(time, "%d:%d:%d", &hh, &mm, &ss) != 3) {
        printf("Invalid time format!\n");
        return 0;
    }

    // Display extracted values
    printf("Hours = %d, Minutes = %d, Seconds = %d\n", hh, mm, ss);

    // Check validity
    if (hh >= 0 && hh < 24 && mm >= 0 && mm < 60 && ss >= 0 && ss < 60)
        printf("Time is VALID\n");
    else
        printf("Time is INVALID\n");

    return 0;
}

