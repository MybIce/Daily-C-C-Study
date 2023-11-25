#include<stdio.h>
int main()
{
	int term(int,int,int);
	int a,d,n;
	printf("Enter the first number a:");
	scanf("%d",&a);
	printf("Enter the step d:");
	scanf("%d",&d);
	printf("Enetr the turns n:");
	scanf("%d",&n);
	printf("The sum of n terms is:%d",term(a,d,n));
	return 0;
}
int term(int a,int d,int n)
{
	if(n==1)
	return a;
	else
	return d*(n-1)+term(a,d,n-1);
}
