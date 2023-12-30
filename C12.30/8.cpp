#include <stdio.h>
struct Date
{
	int month;
	int day;
	int year;
};
void days()
{
	struct Date date;
	printf("Enter the day:");
	scanf("%d %d %d",&date.month,&date.day,&date.year);
	int ds;
	ds=(date.year-1900)*360+(date.month-1)*30+(date.day-1);
	printf("%d",ds);
}
int main()
{
	void days();
	days();
	return 0;
}

