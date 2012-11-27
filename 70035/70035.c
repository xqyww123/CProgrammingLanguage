#include "stdio.h"
#include "string.h"
#define MAXLEN 80
int poww(int, int);
int main(void)
{  
    char ch;
    char str[MAXLEN], num[MAXLEN];
    int i, k;
    int repeat, ri;
    long number;

    scanf("%d", &repeat);
    getchar();
    for(ri = 1; ri <= repeat; ri++){
        i = 0;
        while((ch = getchar()) != '\n'){
            str[i]=ch;
            i++;
        }
        str[i] = 0;
        number = 0;
        /*---------*/
        memset(num,0,sizeof(num));
        i = 0;
        k = 0;
        for (i = 0; str[i]; ++i)
        {
            if (str[i] >= 'A' && str[i] <= 'F')
            {
                num[k] = str[i] - 'A' + 10;
                ++k;
                continue;
            }
            if (str[i] >= 'a' && str[i] <= 'f')
            {
                num[k] = str[i] - 'a' + 10;
                ++k;
                continue;
            }
            if (str[i] >= '0' && str[i] <= '9')
            {
                num[k] = str[i] - '0';
                ++k;
                continue;
            }
        }
        for (i = k - 1; i >= 0; --i)
        {
            number += poww(16, k - i - 1) * num[i];
        }
        printf("Dec = %ld\n",number);
    }
    return 0;
}

int poww(int a, int b)
{
    int result = 1;
    while (b--)
    {
        result *= a;
    }
    return result;
}