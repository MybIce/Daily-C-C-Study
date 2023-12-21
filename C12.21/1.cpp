#include <stdio.h>
#define NUM 16
int main()
{
	char message[]="Vacation is near";
	void display(char []);
	display(message);
	return 0;
}
void display(char strng[])
{
	int i;
	for(i=0;i<NUM;i++)
	{
		printf("%c",*strng++);
	}
}
