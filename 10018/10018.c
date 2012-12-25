#include <stdio.h>
void reverse(int n);
int main(void)
{
    int n,ri,repeat;

    scanf("%d",&repeat);
    for(ri=1;ri<=repeat;ri++){
        scanf("%d",&n);
        if (n < 0)
        {
            printf("-");
            n = -n;
        }
        reverse(n);
        printf("\n");
    }
    return 0;
}

void reverse(int n)
{
    if (n == 0)
        return;
    printf("%d", n % 10);
    reverse(n / 10);
}
/*---------*/