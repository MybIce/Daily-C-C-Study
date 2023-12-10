#include <stdio.h>
#define SIZE 999
int main()
{
	char str[SIZE];
	void show(char []);
	printf("Enter a string:");
	gets(str);
	show(str);
	return 0;
}
void show(char show[])
{
	int i=0;
	for(i;i<SIZE-1;i++)
	{if(show[i]!='\0')
	printf("\n%c",show[i]);
	else
	break;}
}
