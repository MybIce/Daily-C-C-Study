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
int main()
{
	int days(struct Date);
	struct Date date;
	printf("Enter the day:");
	scanf("%d %d %d",&date.month,&date.day,&date.year);
	printf("The days are:%d",days(date));
	return 0;
}

