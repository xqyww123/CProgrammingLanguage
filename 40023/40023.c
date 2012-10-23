#include "stdio.h"
int main(void)
{
    int count, fen1, fen2, fen5, money;
    int repeat, ri;


    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &money);
        count = 0;
		/*---------*/
		for (fen5 = 20; fen5 > 0; --fen5)
			for (fen2 = 50; fen2 > 0; --fen2)
				for (fen1 = 100; fen1 > 0; --fen1)
				{
					if (fen5 * 5 + fen2 * 2 + fen1 * 1 == money)
					{
						++count;
						printf("fen5:%d,fen2:%d,fen1:%d,total:%d\n", fen5, fen2, fen1, fen5 + fen2 + fen1);
					}
				}
    	printf("count = %d\n", count);
    }
}