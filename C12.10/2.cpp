#include <stdio.h>
#include <string.h>
#define SIZE 999
int main()
{
	int len;
	void reverse(char [],int);
	char str[SIZE];
	printf("Enter a string:");
	gets(str);
	len=strlen(str);
	reverse(str,len);
	return 0;
}
void reverse(char str[],int len)
{
	int i;
	char temp;
	for(i=0;i<len/2;i++)
	{
		temp=str[i];
		str[i]=str[len-1-i];
		str[len-1-i]=temp;
	}
	for(i=0;i<len;i++)
	printf("%c",str[i]);
}
