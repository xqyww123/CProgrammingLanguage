#include <stdio.h>
#include <math.h>
#define max(x,y) (x>y?x:y)
#define min(x,y) (x<y?x:y)

int main(void)
{
    int a, b, c;
    int repeat, ri;
    double area, perimeter, s;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d%d%d", &a, &b, &c);
		/*---------*/
        if (max(a,b) - min(a,b) < c && a + b > c)
        {
        	perimeter = a + b + c;
        	s = perimeter / 2;
        	area = pow(s * (s - a) * (s - b) * (s - c), 0.5);
        	printf("area = %.2f, perimeter = %.2f\n",area, perimeter);
        }
        else
        	printf("These sides do not correspond to a valid triangle\n");
    }
    return 0;
}