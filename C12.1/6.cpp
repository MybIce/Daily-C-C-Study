#include <stdio.h>
int main()
{
	int countn(char []);
	int s;
	char string[99];
	printf("Enter the string:");
	gets(string);
	s=countn(string);
	printf("The number is:%d",s);
	return 0;
}
int countn(char string[99])
{
	int count=0,i;
	for(i=0;string[i]!='\0';i++)
	count++;
	return count;
}
