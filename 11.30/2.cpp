#include <stdio.h>
#define NUM 50
int main()
{
	int peopletypes[NUM];
	int num,dindex=0;
	int count[5]={0};
	while(1&&dindex<50)
	{
		printf("Enter a integer number");
		scanf("%d",&num);
		if(num<0)
		break;
		if(num<1||num>4)
		continue;
		peopletypes[dindex++]=num;
	}
	int i;
	for(i=0;i<dindex;i++)
	count[peopletypes[i]]++;
	printf("\nThe infants:%d",count[1]);
	printf("\nThe children:%d",count[2]);
	printf("\nThe teenagers:%d",count[3]);
	printf("\nThe adults:%d",count[4]);
	return  0;
}
