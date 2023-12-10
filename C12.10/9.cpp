#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM 20
int main()
{
	void chartype(int);
	int num,i;
	srand(time(NULL));
	for(i=0;i<20;i++)
	{num=0+(int)rand()%128;
	chartype(num);}
	return 0;
	
}
void chartype(int num)
{
	if(num==32)
	printf("\nThe ASCLL character is aspace");
	else if((num>=33&&num<=47)||(num>=58&&num<=64)||(num>=91&&num<=96)||(num>=123&&num<=126))
	printf("\nThe ASCLL character is a punctuation mark");
	else if(num>=48&&num<=57)
	printf("\nThe ASCLL character is a digit");
	else if(num>=65&&num<=90)
	printf("\nThe ASCLL character is a uppercase letter");
	else if(num>=97&&num<=122)
	printf("\nThe ASCLL character is a lowercase letter");
	else
	printf("\n%d,The ASCLL character is a nonprintable character",num);
}
