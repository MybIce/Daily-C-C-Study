#include <stdio.h>
int main()
{
	int sum(int);
	int n;
	printf("Enter the number n:");
	scanf("%d",&n);
	printf("The sum is :%d",sum(n));
	return 0;
}
int sum(int n)
{
	if(n==1)
	return 1;
	else
	return n+sum(n-1);
}
