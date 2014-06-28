#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stud_node{
     int    num;
     char  name[20];
     int    score;
     struct stud_node *next;
};
void main()
{
	char str[255];
	struct stud_node *head,*tail, *p;
	int num, score;
	char name[20];
	int size = sizeof(struct stud_node);
	
	head=tail=NULL;
	do { gets(str); if (str[0] == '0') break;puts(str); } while (1);
}
