#include <stdio.h>
#include <string.h>
int main()
{
    char c;
    char str[80];
    int repeat, ri;
    void delchar(char *str, char c);

    scanf("%d", &repeat);
    getchar();
    for(ri = 1; ri <= repeat; ri++){
        gets(str);
        scanf("%c", &c);
        getchar();
        /*---------*/
        delchar(str, c);
        printf("result: ");
        puts(str);
    }
    return 0;
}

void delchar(char *str, char c)
{
    int n = strlen(str);
    
    char *a = str;
    while (*a != '\0')
    {
        if (*a == c)
        {
            char *c = a;
            while (*c)
            {
                *c = *(c + 1);
                ++c;
            }
        }
        else
        {
            ++a;
        }
    }
}
/*---------*/