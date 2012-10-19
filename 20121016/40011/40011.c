#include <stdio.h>
int gcdd(int ,int );
int lcmm(int ,int );
int main(void)
{
    int gcd, lcm, m, n;  
    int repeat, ri;  

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &m);
        scanf("%d", &n);
        if(m <= 0 || n <= 0)
            printf("m <= 0 or n <= 0");
        else{

            gcd = gcdd(m , n);
            lcm = lcmm(m , n);
            printf("%d is the least common multiple of %d and %d, %d is the greatest common divisor of %d and %d.\n", lcm, m, n, gcd, m, n);
        }
    }
}

int gcdd(int a,int b)
{
    int k;
    if (a < b)
    {
        k = a;
        a = b;
        b = k;
    }
    if (b != 0)
        return gcdd(b, a % b);
    return a;
}

int lcmm(int a,int b)
{
    return a / gcdd(a,b) * b;
}