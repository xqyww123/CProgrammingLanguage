#include <stdio.h>
struct date{
    int year;
    int month;
    int day;
};
int day_of_year(struct date *p);

int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main(void)
{
    int yearday;
    int repeat, ri;
    struct date date;
    int i, re;
    
    for (i=1;i<12;++i) days[i] += days[i-1];
    
    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d%d%d", &date.year, &date.month, &date.day);
        re = days[date.month-1] + date.day;
        if (!(date.year % 4) && (date.year % 100 || !(date.year % 400)) && date.month > 2) re += 1; 
        printf("%d\n", yearday = re);
    }
}
