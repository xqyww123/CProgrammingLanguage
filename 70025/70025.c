#include "stdio.h"
int main(void)
{
    int day, day_year, month, year;
    int repeat, ri;

    int day_of_year(int year, int month, int day);

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d%d%d", &year, &month, &day);
        /*---------*/
        day_year = day_of_year(year, month, day);
        printf("days of year: %d\n", day_year);
    }
    return 0;
}

int day_of_year(int year, int month, int day)
{
    --month;
    int m[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i ,d = 0;
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        m[1] = 29;
    for (i = 0; i != month; ++i)
        d += m[i];
    d += day;
    return d;
}
/*---------*/