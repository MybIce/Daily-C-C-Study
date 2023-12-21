#include <stdio.h>
#define NUM 10
int main()
{
	void extend(float [],float [],float []);
	float price[NUM]={10.62,14.89,13.21,16.55,19.62,
					  9.47,6.58,19.32,12.15,3.99};
	float quantity[NUM]={4,9.5,6,7.35,9,15.3,3,5.4,2.9,4.9};
	float amount[NUM];
	extend(price,quantity,amount);
	return 0;
}
void extend(float price[],float quantity[],float amount[])
{
	int i;
	for(i=0;i<NUM;i++)
	{
		*(amount+i)=*(price+i)*(*(quantity+i));
		printf("%.2f\n",*(amount+i));
	}
}
