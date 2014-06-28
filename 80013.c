#include <stdio.h>
#include <stdlib.h>
void sort(int a[],int n);
int com(const void *a, const void *b)
{ return *((const int*)a) - *((const int*)b); }
int main(void)
{
    int i, n;
    int repeat, ri;
    int a[10];

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &n);
        for(i = 0; i < n; i++)
            scanf("%d", &a[i]);
/*---------*/
	qsort(a, n, sizeof(int), &com);
        printf("After sorted: ");
        for(i = 0; i < n; i++)
            printf("%d ", a[i]);
        printf("\n");
    }
}
