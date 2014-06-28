#include <stdio.h>
int main(void)
{
    char c;
    int blank, digit, letter, other;
    int ri, repeat;

    scanf("%d", &repeat);
    getchar();
    for(ri = 1; ri<=repeat; ri++){
	    letter = blank = digit = other = 0;
        while ((c = getchar()) != '\n') 
	{
	       if (c <= 'Z' && c>='A' || c<='z' && c>='a') letter ++;
       		else if (c == ' ') blank++;
		else if (c <='9' && c>='0') digit ++;
	       else other ++;		
       	}
/*---------*/
	
        printf("letter = %d, blank = %d, digit = %d, other = %d\n", letter, blank, digit, other);
    }
}
