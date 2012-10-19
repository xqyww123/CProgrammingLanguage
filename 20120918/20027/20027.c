#include <stdio.h>
#define H(x) (x / 100)
#define M(x) (x % 100)
int main(void)
{
    int time1, time2, hour, minutes;
	scanf("%d%d", &time1, &time2);
	/*---------*/
	hour = H(time2) - H(time1);
	if (M(time2) < M(time1))
	{
		hour --;
		minutes = 60 + M(time2) - M(time1);
	}
	else
		minutes = M(time2) - M(time1);
	printf("The train journey time is %d hours %d minutes.\n", hour, minutes);
}