#include <stdio.h>
#include <string.h>
int main()
{
	int j;
	char string[99];
	void trimrear(char []);
	printf("Enter a string:");
	gets(string);
	trimrear(string);
	for(j=0;string[j]!='\0';j++)
	printf("%c",string[j]);
	return 0;
}
void trimrear(char a[])
{
	int len;
	len=strlen(a);
	int i=len-1;
	while(*(a+i)==' '&&i>=0)
	i--;
	*(a+i+1)='\0';
}
