#include <stdio.h>
int main(void)
{    
    int n;
    int repeat, ri;
    void pyramid(int n);

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &n);
        /*---------*/
        pyramid(n);
    }
    return 0;
}

/*---------*/
void pyramid(int k)
{
    int i,j;
    for (i = 1; i <= k; ++i)
    {
        for (j = k; j != i; --j)
            printf(" ");
        for (j = 0; j != i; ++j)
            printf("%d ", i);
        printf("\n");
    }
}