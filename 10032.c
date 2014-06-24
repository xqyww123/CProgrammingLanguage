#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stud_node{
	int num;
	char name[20];
	int score;
	struct stud_node *next;
};
struct stud_node *Creat_Stu_Doc();
struct stud_node *DeleteDoc(struct stud_node *head,int min_score);
void Ptrint_Stu_Doc(struct stud_node *head);

#define Nmax 10000
int a[Nmax], b[Nmax];
char str[Nmax][255];

void main()
{
	struct stud_node *head;
	int min_score;

	int i =0, n=0;
	for (i=0;1;++i, ++n)
	{
		scanf("%d", &a[i]); if (!a[i]) break;
		scanf("%s%d",str[i], &b[i]);
	}
	int m; scanf("%d", &m);
	for (i=0;i<n;++i)
	{
		if (b[i] >= m) printf("%d %s %d\n", a[i], str[i], b[i]);
	}
}

