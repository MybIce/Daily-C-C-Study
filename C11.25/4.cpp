#include<stdio.h>
int main()
{
	int term(int,int,int);
	int a,r,n;
	printf("Enter the first number a:");
	scanf("%d",&a);
	printf("Enter the ratio r:");
	scanf("%d",&r);
	printf("Enetr the turns n:");
	scanf("%d",&n);
	printf("The sum of n terms is:%d",term(a,r,n));
	return 0;
}
int term(int a,int r,int n)
{
	if(n==1)
	return a;
	else
	return a+r*term(a,r,n-1);
}
