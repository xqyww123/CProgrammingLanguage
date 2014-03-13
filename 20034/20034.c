#include <stdio.h>

int main() {
    int i, n;
    int repeat, ri;
    double sum; 
    
    scanf("%d", &repeat);
    for (ri = 1; ri <= repeat; ri++) {
        scanf("%d", &n);
/*---------*/
        sum = 0;
        for (i = 1; i <= n; i++) {
            sum += 1.0/(double)(i*2-1);
        }
        printf("sum = %.6f\n", sum);
    }
    return 0;
}

