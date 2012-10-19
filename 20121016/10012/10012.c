#include <stdio.h>
#include <math.h>
#define g(n) (n % 10)
#define s(n) (n % 100 / 10)
#define b(n) (n / 100)
int search(int n);
int main(void)
{
	int number,ri,repeat;

	scanf("%d",&repeat);
	for(ri=1;ri<=repeat;ri++){
		do{
			scanf("%d",&number);
		}while(number<101||number>999);
		printf("count=%d\n",search(number));
	}
}
/*---------*/
int search(int n)
{
	int i,count = 0;
	for (i = 101; i <= n; ++i)
	{
		int k = sqrt(i);
		if (k * k != i)
			continue;
		if (g(i) == s(i) || s(i) == b(i) || b(i) == g(i) )
			++count;
	}
	return count;
}
