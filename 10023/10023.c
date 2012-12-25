#include<stdio.h>
#include<string.h>
int main()
{
    int i,ri,repeat;
    char *date[]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    char str[80];

    scanf("%d",&repeat);
    getchar();
    for(ri=1;ri<=repeat;ri++){
        int times = 0;
        scanf("%s",str);
        /*---------*/
        for (i = 0; i != 7; ++i)
        {
            if (strcmp(str, date[i]) == 0)
            {
                printf("%d\n", i + 1);
                times = 1;
                break;
            }
        }
        if (!times)
        {
            printf("-1\n");
        }
    }
    return 0;
}