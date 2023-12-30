#include <stdio.h>
int main()
{
	struct Empolyee
	{
		int id;
		char name[20];
		double pay;
		double hour;
	}emp[6];
	int i;
	double grosspay,total=0.0;
	for(i=0;i<6;i++)
	{
		printf("\nThe %dth:",i+1);
		scanf("%d",&emp[i].id);
		scanf("%s",&emp[i].name);
		scanf("%lf",&emp[i].pay);
		scanf("%lf",&emp[i].hour);
	}
	for(i=0;i<6;i++)
	{
		grosspay=emp[i].pay*emp[i].hour;
		total+=grosspay;
		printf("\n%s %d %lf",emp[i].name,emp[i].id,grosspay);
	}
	printf("\nfTotal:%lf",total);
	return 0;
}
