#include "stdio.h"
int main(void)
{
    int ri,repeat;
    int i,n;
    void dectobin(int n);

    scanf("%d",&repeat);
    for(ri=1;ri<=repeat;ri++){
        int k;
        scanf("%d",&n);
        k = n < 0 ? 1 : 0;
        n = n < 0 ? -n : n;
        if (k)
            printf("-");
        if (n == 0)
            printf("0");
        dectobin(n);
        printf("\n");
    }
}

void dectobin(int n)
{
    int bit = n % 2;
    if (n == 0)
        return;
    dectobin(n >> 1);
    printf("%d", bit);
}
/*---------*/