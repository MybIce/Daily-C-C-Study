#include <stdio.h>
struct Date
{
	int month;
	int day;
	int year;
};
int days(struct Date date)
{
	int ds;
	ds=(date.year-1900)*360+(date.month-1)*30+(date.day-1);
	return ds;
}
struct Date larger(struct Date date1,struct Date date2)
{
	int day1=days(date1);
	int day2=days(date2);
	if((day1-day2)>=0)
	return date1;
	else
	return date2;
}
int main()
{
	struct Date date1,date2;
	struct Date larger(struct Date,struct Date);
	printf("Enter first date:");
	scanf("%d %d %d",&date1.month,&date1.day,&date1.year);
	printf("Enter second date:");
	scanf("%d %d %d",&date2.month,&date2.day,&date2.year);
	printf("The larger one is %d %d %d",larger(date1,date2).month,larger(date1,date2).day,larger(date1,date2).year);
}
