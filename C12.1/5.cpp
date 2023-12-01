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
	int i=0,counta=0,counte=0,counti=0,counto=0,countu=0;
	char c;
	while((c=string[i++])!='\0')
	switch(c)
	{
		case 'a':
		{
			counta++;
			break;
		}
		case 'e':
		{
			counte++;
			break;
		}
		case 'i':
		{
			counti++;
			break;
		}
		case 'o':
		{
			counto++;
			break;
		}
		case 'u':
		{
			countu++;
			break;
		}
	}
	printf("\nNumber of a is:%d",counta);
	printf("\nNumber of e is:%d",counte);
	printf("\nNumber of i is:%d",counti);
	printf("\nNumber of o is:%d",counto);
	printf("\nNumber of u is:%d",countu);
	return;
}
