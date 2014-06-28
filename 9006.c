#include <stdio.h>
#include <stdlib.h>
struct address_list{
        char name[20];
        long birthday;
        char phone[20];
    }temp, friends[10];
int com(const void* a, const void* b)
{
    return (int)(((struct address_list*)a)->birthday - ((struct address_list*)b)->birthday);
}
int main (void)
{  
    int i, index, j, n;

    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%s%ld%s", friends[i].name, &friends[i].birthday, friends[i].phone);
    qsort(friends, n, sizeof(struct address_list), &com);
        for(i = 0; i < n; i++)
            printf("%s %ld %s\n", friends[i].name, friends[i].birthday, friends[i].phone);
}
