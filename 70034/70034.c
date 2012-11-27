#include "stdio.h"
#include "string.h"
#define MAXLEN 80
int main(void)
{
    char ch;
    char str[MAXLEN];
    int i;
    int repeat, ri;

    scanf("%d", &repeat);
    getchar();
    for(ri = 1; ri <= repeat; ri++){
        i = 0;
        while((ch = getchar()) != '\n'){
            str[i] = ch;
            i++;
        }
        str[i] = 0;
        /*---------*/
        for (i = 0; str[i]; ++i)
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
                str[i] = 'Z' - str[i] + 'A';
        }
        printf("After replaced: ");
        for(i = 0; str[i] != 0; i++) 
            putchar(str[i]);
        putchar('\n');
   }
   return 0;
}