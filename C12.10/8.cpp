#include <stdio.h>
#include <string.h>
#define SIZE 999
int main()
{	
	void trimrear(char []);
	char ch[SIZE];
	printf("Enter a string:");
	gets(ch);
	trimrear(ch);
	return 0;
}
void trimrear(char ch[])
{
	int len,i;
	len=strlen(ch);
	i=len-1;
	while(ch[i]==' '&&i>=0)
	i--;
	ch[i+1]='\0';
	len=strlen(ch);
	for(i=0;i<len;i++)
	printf("%c",ch[i]);
}
