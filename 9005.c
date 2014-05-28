#include <stdio.h>
#include <limits.h>
int main (void)
{  
    int i, max_index, min_index, n;
    double x;
    struct book{
        char name[50];
        double price;
    }book[10];

    scanf("%d", &n);
    getchar();
    int maxv = 0, minv = INT_MAX;
    for(i = 0; i < n; i++){
        gets(book[i].name);
        scanf("%lf", &x);
        getchar();
        book[i].price = x;
        if (x > maxv) { max_index = i; maxv = x; }
        if (x < minv) { min_index = i; minv = x; }
    }
    
    
    printf("highest price: %.1f, %s\n", book[max_index].price, book[max_index].name);
    printf("lowest price: %.1f, %s\n", book[min_index].price, book[min_index].name);
}
