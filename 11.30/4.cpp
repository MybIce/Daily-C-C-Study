#include <stdio.h>
#define NUM 10
int main()
{
	int sorti(double [],int);
	int sortd(double [],int);
	double numl,num[NUM];
	int i,dindex,maxidx,minidx,count=0;
	while(count<10)
	{printf("Enter the double number you want:");
	scanf("%lf",&numl);
	num[dindex++]=numl;
	count++;}
	maxidx=sorti(num,NUM);
	minidx=sortd(num,NUM);
	printf("\nThe largest number's position is:%d",maxidx);
	printf("\nThe samllest number's position is:%d",minidx);
	return 0;
}
int sorti(double num[],int numl)
{
	int i,j,maxidx;
	double max;
	max=num[0];
	maxidx=0;
	for(i=0;i<numl-1;i++)
	{
		for(j=i+1;j<numl;j++)
		{
			if(num[j]>max)
			{maxidx=j;
			max=num[j];}
		}
	}
	return maxidx;
}
int sortd(double num[],int numl)
{
	int i,j,minidx;
	double min;
	min=num[0];
	minidx=0;
	for(i=0;i<numl-1;i++)
	{
		for(j=i+1;j<numl;j++)
		{
			if(num[j]<min)
			{minidx=j;
			min=num[j];}
		}
	}
	return minidx;
}
