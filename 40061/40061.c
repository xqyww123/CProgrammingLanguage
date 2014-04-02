#include <stdio.h>

int main() {
    int sum, x;
    int repeat, ri;
    
    scanf("%d", &repeat);
    for (ri = 1; ri <= repeat; ri++) {
        scanf("%d", &x);
        sum = 0;
        while (x > 0) {
            if (x % 2 == 0) {
                sum += x;
            }
            scanf("%d", &x);
        }
/*-------*/
        printf("The sum of the even numbers is %d.\n", sum);
    }
    return 0;
}
