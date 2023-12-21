#include <stdio.h>
int main()
{
	char string[99];
	void convert(char []);
	printf("Enter a string:");
	gets(string);
	convert(string);
	puts(string);
	return 0;
}
void convert(char strng[])
{
	int i=0;
	char toUpper(char);
	for(i=0;strng[i]!='\0';i++)
	{
		*(strng+i)=toUpper(*(strng+i));
	}
}
char toUpper(char c)
{
	if(c>'a'&&c<'z')
	return(c-'a'+'A');
	if(c>'A'&&c<'Z')
	return(c);
}
