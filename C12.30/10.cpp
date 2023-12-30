#include <stdio.h>
struct Date
{
	int month;
	int day;
	int year;
};
	struct Monthdays
	{
		char name[10];
		int days;
	};
	struct Monthdays convert[12]={"1",31,"2",28,"3",31,"4",30,"5",31,"6",30,"7",31,"8",31,
	"9",30,"10",31,"11",30,"12",31};
int days(struct Date date)
{
	int ds,mdaytotal=0,i;
	if(date.month>1)
	{for(i=0;i<(date.month-1);i++)
	mdaytotal+=convert[i].days;}
	else
	mdaytotal=0;
	ds=(date.year-1900)*360+mdaytotal+(date.day-1);
	return ds;
}
int main()
{
	int days(struct Date);
	struct Date date;
	printf("Enter the day:");
	scanf("%d %d %d",&date.month,&date.day,&date.year);
	if(((date.year%4)==0&&(date.year%100!=0))||(date.year%400==0))
	convert[1].days+=1;
	printf("The days are:%d",days(date));
	return 0;
}

