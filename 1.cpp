#include <stdio.h>
int main()
{
	void yrCalc(long,int*,int*,int*);
	long total;
	int day,month,year;
	printf("Enter the total day:");
	scanf("%d",&total);
	yrCalc(total,&day,&month,&year);
	printf("The time(d/m/y) is %d/%d/%d",day,month,year);
	return 0;
}
void yrCalc(long total,int *day,int *month,int *year)
{
	*year=total/365+1900;
	*month=total%365/30+1;
	*day=total%365%30+1;
}
