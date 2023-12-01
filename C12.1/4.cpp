#include <stdio.h>
int main()
{
	char string[]="How much is the little worth worth?";
	void vowels(char []);
	vowels(string);
	return 0;
}
void vowels(char string[])
{
	int i=0,count=0;
	char c;
	while((c=string[i++])!='\0')
	switch(c)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			putchar(c);
			count++;
	}
	printf("\n");
	printf("Number is:%d",count);
	return;
}
