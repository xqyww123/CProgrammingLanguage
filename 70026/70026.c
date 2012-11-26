#include "stdio.h"
int main(void)
{
    int flag, i, j, k, row, col, n;
    int a[6][6];
    int repeat, ri;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &n);
        for(i = 0; i < n; i++)
            for(j = 0; j < n; j++)
                scanf("%d", &a[i][j]);
        /*---------*/
        flag = 0;
        for (i = 0; i != n; ++i)
        {
            row = 0;
            k = 0;
            for (j = 0; j != n; ++j)
                if (k < a[i][j]) k = a[i][j], col = j;
            for (j = 0; j != n; ++j)
                if (a[j][col] < k) break;
            if (j == n) 
            {
                flag = 1;
                row = i;
                break;
            }
        }
        if(flag != 0)
            printf("a[%d][%d] = %d\n", row, col,a[row][col]);
        else
            printf("NO\n");
    }
}