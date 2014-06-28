#include <stdio.h>
/*---------*/
void main()
{	
	int i,j; 
	float a[3][3],*p[3];

  	for(i = 0; i < 3; i++)
		for(j = 0; j < 3; j++){
			scanf("%f", a[i] + j);
		}

	float s = 0;
	for (i=0;i<3;++i) s += a[i][i] + a[i][2-i];
 	printf("sum=%0.2f \n", s - a[1][1]);
}
