#include <stdio.h>
double p(int n, double x)
{ return (n?(n==1?x:((2*n-1)*p(n-1,x)-(n-1)*p(n-2,x))/n):1); }
int main(void)
{
   int repeat, ri;
   int n;
   double x, result;

   scanf("%d", &repeat);
   for(ri = 1; ri <= repeat; ri++)
   {
       scanf("%d%lf", &n, &x);
       result = p(n, x);
       printf("p(%d, %.2lf)=%.2lf\n", n, x, p(n, x));
   }
}
