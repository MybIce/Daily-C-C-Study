#include <stdio.h>
#define NUMEL 10
int bubbleSort(int [], int );
int main()
{ int nums[NUMEL] ={ 22,5,67,98,45,32,101,99,73,10};
int i, moves;
moves=bubbleSort( nums, NUMEL);
printf("The sort listed,in asending order,is:\n");
for (i=0;i<NUMEL;i++)
printf(" %4d ", nums[i]);
printf("\n %d moves were made to sort this list \n",moves);
return 0;
}
int bubbleSort(int num[], int numel)
{ int i, j, temp, moves =0;
for (i=1;i<=numel-1; i++)
{
for(j=1;j<=numel-i;j++)
{ if (num[j]< num[j-1])
{ temp = num[j]; // swap values
num[j]=num[j-1];
num[j-1]= temp;
moves++;
}
}
}
return (moves);
}
