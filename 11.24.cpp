#include <stdio.h>
int GCD(int n1,int n2)
{
	int remainder;
	remainder=n1%n2;
	while(remainder)
	{
		n1=n2;
		n2=remainder;
		remainder=n1%n2;
	}
	return n2;
}
int main()
{
	int GCD(int,int);
	int n1,n2;
	printf("Enter n1:");
	scanf("%d",&n1);
	printf("Enter n2:");
	scanf("\n%d",&n2);
	printf("The GCD is:%d",GCD(n1,n2));
	return 0;
}
