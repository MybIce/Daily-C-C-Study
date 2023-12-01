#include <stdio.h>
#define ROW 10
#define COL 20
int main()
{
	int findmax(int [ROW][COL]);
	int max,row,col;
	int num[ROW][COL]={1,2,3,1,2,3,1,2,3,1,23,4,12,31,1,21,23,1,2,3,4,4,5,6,4,3,12,12,3,123,21};
	max=findmax(num);
	printf("\nThe max is:%d",max);
	return 0;
}
int findmax(int num[ROW][COL])
{
	int i,j,max,row,col;
	for(i=0;i<ROW;i++)
	for(j=0;j<COL;j++)
	if(num[i][j]>max)
	{
		max=num[i][j];
		row=i;
		col=j;
	}
	printf("\nThe position is:(%d,%d)",row,col);
	return max;
}
