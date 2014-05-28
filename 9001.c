#include <stdio.h>
int main (void)
{
    int i, n;
    double x;
    struct emp{
        char  name[10]; 
        double jbg;  
        double fdg;   
        double zc;
    } s[10];

    scanf("%d", &n);
    struct emp xxx;
    for (i = 0; i < n; i++)      
    {
        scanf("%s%lf%lf%lf", xxx.name, &xxx.jbg, &xxx.fdg, &xxx.zc);
        printf ("%5s 实发工资：%7.2f\n", xxx.name, xxx.jbg + xxx.fdg - xxx.zc);
    }
}  
 
