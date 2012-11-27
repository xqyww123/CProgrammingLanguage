#include <stdio.h>     
#include <string.h>
int main(void)
{
    char str[80];
    int i, s;
    int repeat, ri;

    scanf("%d", &repeat);
    getchar();
    for(ri = 1; ri <= repeat; ri++){
        i = 0;
        while((str[i] = getchar( )) != '\n') 
            i++; 
        str[i] = 0;
        s = 0;
        /*---------*/  
        for (i = 0; str[i]; ++i)
        {
            if (str[i] >= '0' && str[i] <= '9')
            {
                s *= 10;
                s += str[i] - '0';
            }
        }
        printf("%d\n",s);
    }
    return 0;
}