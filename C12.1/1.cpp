#include <stdio.h>
#define ROW 4
#define COL 5
int main()
{
	double sum(double [ROW][COL],int,int);
	double num[ROW][COL]={11.2,12311.12,312.12,231.12,312.1,1213.13,123.12,213.312,321.123,132.321,343.3,321.12,12.2,.23,231,23.3,123.1,12.2,21.1,12.3};
	double Sum;
	Sum=sum(num,ROW,COL);
	printf("The sum of the num is:%lf",Sum);
	return 0;
}
double sum(double num[ROW][COL],int row,int col)
{
	int i,j;
	double sum=0;
	for(i=0;i<row;i++)
	for(j=0;j<col;j++)
	sum+=num[i][j];
	return sum;
}
