#include <stdio.h>
#include <string.h>
#define SIZE 999
int main()
{
	void toLower(char []);
	char ch[999];
	printf("Enter a uppercase string :");
	gets(ch);
	toLower(ch);
	return 0;
}
void toLower(char ch[])
{
	int len,i;
	len=strlen(ch);
	for(i=0;i<len;i++)
	{if(ch[i]>='A'&&ch[i]<='Z')
	{
		ch[i]=ch[i]-'A'+'a';
		printf("%c",ch[i]);
	}
	else
	printf("\nThe passed character unaltered");}
}
