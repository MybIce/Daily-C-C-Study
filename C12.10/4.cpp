#include <stdio.h>
#include <string.h>
#define SIZE 999
int main()
{
	void addChar(char [],char [],int);
	char a[SIZE],b[SIZE];
	int start,i,len;
	printf("Enter the initial string:");
	gets(a);
	printf("Enter the added string:");
	gets(b);
	printf("Enter the start position:");
	scanf("%d",&start);
	addChar(a,b,start);
	len=strlen(a);
	for(i=0;i<len;i++)
	printf("%c",a[i]);
	return 0;
}
void addChar(char a[],char b[],int start)
{
	int i;
	int lena,lenb;
	lena=strlen(a);
	lenb=strlen(b);
	for(i=lena;i>=start-1;i--)
	a[i+lenb]=a[i];
	for(i=0;i<lenb;i++)
	a[start-1+i]=b[i];
}
