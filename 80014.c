#include<stdio.h>
int main(void)
{
    int count, i, m, n, no;
    int num[51];
    int *p;

    scanf("%d%d", &n, &m);
    for(i = 0; i < n; i++)
        num[i] = i + 1;
    num[n]=-1;
    p = num;
    int bomb = m;
    for (i=1;i<n;++i)
    {
	for (;1;*++p==-1?(p=num):0) if (*p && !--bomb) { bomb=m, printf("No%d: %d\n", i, p-num+1), *p = 0; break; }
    }
    p = num;
    while(*p == 0)
        p++;
    printf("Last No is: %d\n", *p);
}
