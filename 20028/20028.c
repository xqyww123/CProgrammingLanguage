#include <stdio.h>
int main(void)
{
    int digit1, digit2, digit3, digit4, newnum, number;

    scanf("%d", &number);
    /*---------*/
    digit1 = number / 1000 + 9;
    digit2 = number / 100 % 10 + 9;
    digit3 = number / 10 % 10 + 9;
    digit4 = number % 10 + 9;

    digit1 %= 10;
    digit2 %= 10;
    digit3 %= 10;
    digit4 %= 10;
    newnum = digit3 * 1000 + digit4 * 100 + digit1 * 10 + digit2;
    printf("The encrypted number is %d\n", newnum);
    return 0;
}