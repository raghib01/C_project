#include <stdio.h>

int getFirstDayofYear(int year)
{
    int firstday = (year * 365 + ((year - 1) / 4) - ((year - 1) / 100) + ((year - 1) / 400)) % 7;
    return firstday;
}

int main()
{
    char *months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int monthDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int i, j;
    int weekDays = 0, spaceCount = 0, year;

    printf("Choose a year: ");
    scanf("%d", &year);
    printf("\n\n-------------welcome to %d-----------------\n\n", year);

    // Check leap year;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        monthDays[1] = 29;
    }
    // Get First days of year;
    weekDays = getFirstDayofYear(year);

    for (i = 0; i < 12; i++)
    {
        printf("\n______________________%s_____________________\n\n", months[i]);
        printf("Sun\tMon\tTue\tWed\tThu\tFri\tSat\n ");

        // Create a space in moth date;
        for (spaceCount = 1; spaceCount <= weekDays; spaceCount++)
        {
            printf("\t");
        }

        // Create a date fo month;
        int days = monthDays[i];
        for (j = 1; j <= days; j++)
        {
            printf("%d\t", j);
            weekDays++;
            if (weekDays > 6)
            {
                weekDays = 0;
                printf("\n");
            }
        }
        printf("\n\n\n");
    };

    return 0;
}
