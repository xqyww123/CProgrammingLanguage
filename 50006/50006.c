#include "stdio.h"
int main(void)
{
    int count, digit, in; 
    int repeat, ri;
    int countdigit(int number, int digit);

    scanf("%d",&repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d%d", &in, &digit);
        /*---------*/
        count = countdigit(digit, in);
        if (count == 0)
            count = 0;
        printf("Number %d of digit %d: %d\n", in, digit, count);
    }
}

int countdigit(int number, int digit)
{
    int k;
    if (digit < 0)
        digit = -digit;
    k = digit % 10;
    if (digit == 0)
        return 0;
    if (k == number)
        return countdigit(number, digit / 10) + 1;
    else
        return countdigit(number, digit / 10);
}
/*---------*/