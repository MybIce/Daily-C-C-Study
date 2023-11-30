#include <stdio.h>
#define NUM 50
int main()
{
	void sort(int [],int);
	int num[NUM];
	int dindex=0;
	int i,numl;
	while(1&&dindex<50)
	{
		printf("Enter a integer number:");
		scanf("%d",&numl);
		if(numl<0)
		break;
		num[dindex++]=numl;
	}
	printf("\nThe list is:\n");
	sort(num,dindex+1);
	for(i=0;i<dindex+1;i++)
	printf(" %d",num[i]);
	return 0;
}
void sort(int num[],int numl)
{
	int i,j,max,maxidx,temp;
	for(i=0;i<(numl-1);i++)
	{
		max=num[i];
		maxidx=i;
		for(j=i+1;j<numl;j++)
		{
			if(num[j]>max)
			{
				max=num[j];
				maxidx=j;
			}
			if(max>num[i])
			{
				temp=num[i];
				num[i]=max;
				num[maxidx]=temp;
			}
		}
	}
}
