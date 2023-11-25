#include <stdio.h>
#define SIZE 8
int main()
{
	void battle(float []);
	float rates[SIZE]={18.24,25.63,5.94,33.92,3.71,32.93,18.24,6.92};
	battle(rates);
	return 0;
}
void battle(float rates[])
{
	int i;
	float max,min;
	max=min=rates[0];
	for(i=1;i<SIZE;i++)
	{
		if(max<rates[i])
		max=rates[i];
		if(min>rates[i])
		min=rates[i];
	}
	printf("The max is:%.2fThe min is :%.2f",max,min);
}
