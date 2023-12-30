#include <stdio.h>
int main()
{
	struct Cars
	{
		int num;
		double miles;
		double gallons;
	} car[5];
	int i;
	double total=0.0,per;
	for(i=0;i<5;i++)
	{
		printf("\nThe %dth:",i+1);
		scanf("%d",&car[i].num);
		scanf("%lf",&car[i].miles);
		scanf("%lf",&car[i].gallons);
	}
	for(i=0;i<5;i++)
	{
		per=car[i].miles/car[i].gallons;
		printf("ID:%d permile:%lf",car[i].num,per);
		total+=per;
	}
	printf("peraverage:%lf",total/5);
	return 0;
}
