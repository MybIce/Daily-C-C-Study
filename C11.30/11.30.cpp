#include <stdio.h>
#include <math.h>
double findAvg(int [],int);
double stdDev(int [],int,double);
int sort(int [],int);
int main()
{
	#define NUMELS 10
	int values[NUMELS]={98,82,67,54,78,83,95,76,68,63};
	double average,stddev;
	int i,moves;
	moves=sort(values,NUMELS);
	average=findAvg(values,NUMELS);
	stddev=stdDev(values,NUMELS,average);
	printf("The average is:%5.2f\n",average);
	printf("The standard is:%5.2f\n",stddev);
	printf("The increasing list is:\n");
	for(i=0;i<NUMELS;i++)
	printf(" %d",values[i]);
	printf("\n%d moves",moves);
	return 0;
}
double findAvg(int nums[],int nume1)
{
	int i;
	double sumnums=0.0;
	for(i=0;i<nume1;i++)
	sumnums=sumnums+nums[i];
	return (sumnums/nume1);
}
double stdDev(int nums[],int nume1,double av)
{
	int i;
	double sumdevs=0.0;
	for(i=0;i<nume1;i++)
	sumdevs=sumdevs+pow((nums[i]-av),2);
	return (sqrt(sumdevs/nume1));
}
int sort(int num[],int nume1)
{
	int i,j,min,minidx,temp,moves=0;
	for(i=0;i<(nume1-1);i++)
	{
		min=num[i];
		minidx=i;
		for(j=i+1;j<nume1;j++)
		{
			if (num[j]<min)
			{
				min=num[j];
				minidx=j;
			}
		}
		if (min<num[i])
		{
			temp=num[i];
			num[i]=min;
			num[minidx]=temp;
			moves++;
		}
	}
	return (moves);
}
