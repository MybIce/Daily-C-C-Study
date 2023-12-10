#include <stdio.h>
#include <string.h>
#define SIZE 999
int main()
{
	void delChar(char [],int,int);
	char a[SIZE];
	int num;
	int start;
	int len,i;
	printf("Enter a string:");
	gets(a);
	printf("Enter the number and the start position you want to delete:");
	scanf("%d %d",&num,&start);
	delChar(a,num,start);
	len=strlen(a);
	for(i=0;i<len;i++)
	printf(" %c",a[i]);
	return 0;
}
void delChar(char a[],int num,int start)
{
	int i;
	for(i=start-1+num;a[i]!='\0';i++)
	{
		a[i-num]=a[i];
	}
	a[i-num]='\0';
}
