#include <stdio.h>
#include <string.h>
#define SIZE 999
int main()
{
	void toUpper(char []);
	char ch[999];
	printf("Enter a lowercase string :");
	gets(ch);
	toUpper(ch);
	return 0;
}
void toUpper(char ch[])
{
	int len,i;
	len=strlen(ch);
	for(i=0;i<len;i++)
	{if(ch[i]>='a'&&ch[i]<='z')
	{
		ch[i]=ch[i]-'a'+'A';
		printf("%c",ch[i]);
	}
	else
	printf("The passed character unaltered");}
}
