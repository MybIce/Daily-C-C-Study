#include <stdio.h>
int main()
{
	struct Date
	{
		int hour,minute,second;
	} date;
	printf("Enter the current hour,minute,second:");
	scanf("%d %d %d",&date.hour,&date.minute,&date.second);
	printf("\nThe current hour,minute,second:");
	printf("\n%d %d %d",date.hour,date.minute,date.second);
	return 0;
}
