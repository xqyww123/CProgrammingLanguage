#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    int i,j, n = 0;
    char *color[20], str[10], *temp;
   
    scanf("%s", str);
    while(str[0] != '#') {
        color[n] = (char *)malloc(sizeof(char)*(strlen(str)+1));  
        strcpy(color[n], str);
        n++;
        scanf("%s", str);
    }
    for (i = 0; i < n; ++i)
        for (j = i; j < n; ++j)
        {
            if (strcmp(color[i], color[j]) > 0)
            {
                char *t = color[i];
                color[i] = color[j];
                color[j] = t;
            }
        }
    /*---------*/        
    for(i = 0; i < n; i++) 
        printf("%s  ", color[i]);
    printf("\n");
}