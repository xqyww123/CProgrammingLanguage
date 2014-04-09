#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <time.h>
#define rep(i,n) for (int i=0;i<n;++i)

int main()
{
	srand(time(0));
	int now, target = rand() % 10 + 1;
	while (1)
	{
		printf("Please guss : ");
		scanf("%d", &now);
		if (now != target) printf("¼ÌÐø²Â\n");
		else { printf("OK\n"); break; }
	}
	getchar();
	return 0;
}

