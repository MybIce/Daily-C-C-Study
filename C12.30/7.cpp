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
int difDays(struct Date date1,struct Date date2)
{
	int day1=days(date1);
	int day2=days(date2);
	return (day1-day2);
}
int main()
{
	struct Date date1,date2;
	int difDays(struct Date,struct Date);
	printf("Enter first date:");
	scanf("%d %d %d",&date1.month,&date1.day,&date1.year);
	printf("Enter second date:");
	scanf("%d %d %d",&date2.month,&date2.day,&date2.year);
	printf("The difference between are:%d",difDays(date1,date2));
	return 0;
}
