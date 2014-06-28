#include <stdio.h>
int fun(int n)
{
	int re = 0;
	while (n) { re = re*10 + n%10; n/=10; }
	return re;
}
int main(void)
{	
    int m1,m2;

    scanf("%d%d", &m1, &m2);
    printf("%d的逆向是%d\n", m1, fun(m1));  
    printf("%d的逆向是%d\n", m2, fun(m2));  

}
