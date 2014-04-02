#include <stdio.h>

int main() {
    int fail, num;
    int repeat, ri;
    double grade, total;
    
    scanf("%d", &repeat);
    for (ri = 1; ri <= repeat; ri++) {
        scanf("%lf", &grade);
        total = 0, fail = 0, num = 0; 
        while (grade > 0) {
            num++;
            total += grade;
            fail += (grade < 60) ? 1 : 0;
            scanf("%lf", &grade);
        }
/*-------*/
        if (num > 0) {
            printf("Grade average is %.2f,the number of fail is %d\n", total/num, fail);
        }
    }
    return 0;
}
