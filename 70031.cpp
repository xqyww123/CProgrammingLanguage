#include <stdio.h> 
int main(void)
{
    int i, j, temp;
    char str[80];		

    i = 0;
    while((str[i] = getchar( )) != '\n') 
        i++; 
    str[i] = 0;       
    for(i--; i>=0; i--) 
        putchar(str[i]);
}
