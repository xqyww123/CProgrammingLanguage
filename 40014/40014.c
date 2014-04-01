#include <stdio.h>

int main() {
	int count, in;
	int repeat, ri;
	
	scanf("%d", &repeat);
	for (ri = 1; ri <= repeat; ri++) {
		scanf("%d", &in);
		count = 0;
		do {
			count++;
		} while (in /= 10);
/*-------*/
		printf("count = %d\n", count);
	}
	
	return 0;
}
