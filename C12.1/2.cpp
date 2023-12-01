#include <stdio.h>
#define ROW 2
#define COL 3
int main()
{
	int first[ROW][COL]={16,18,23,54,91,11};
	int second[ROW][COL]={24,52,77,16,19,59};
	int element[ROW][COL];
	int sum(int,int);
	int i,j;
	for(i=0;i<ROW;i++)
	for(j=0;j<COL;j++)
	{element[i][j]=sum(first[i][j],second[i][j]);
	if(j%3==0)
	printf("\n");
	printf(" %d",element[i][j]);}
	return 0;
}
int sum(int a,int b)
{
	int Sum;
	Sum=a+b;
	return Sum;
}
