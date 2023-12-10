#include <stdio.h>
#include <string.h>
#define SIZE 999
int main()
{
	char ch[SIZE];
	void trimfrnt(char []);
	printf("Enter a string:");
	gets(ch);
	trimfrnt(ch);
	return 0;
}
void trimfrnt(char ch[])
{
	int i,j,len;
	i=0;
	while(ch[i]!='\0'&&ch[i]==' ')
	i++;
	for(j=i;ch[j]!='\0';j++)
	ch[j-i]=ch[j];
	ch[j-i]='\0';
	len=strlen(ch);
	for(i=0;i<len;i++)
	printf("%c",ch[i]);
}
