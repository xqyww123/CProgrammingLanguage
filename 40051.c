
#include <stdio.h>
int main(void)
{
    int fail, num, sum	;               	
    int repeat, ri;
    double grade, total; 	

    scanf("%d",&repeat);
    for(ri = 1; ri <= repeat; ri++){
	    num = sum =  fail = 0;
        while (1) 
	{
		scanf ("%lf", &grade);      	
		if (grade < 0) break;
		sum += grade; num ++;
		if (grade < 60) fail ++;
	}

       if(num > 0)
           printf("Grade average is %.2f,the number of fail is %d\n", ((double)sum)/num, fail);
    }
}

