#include <stdio.h>
#define NUMEL 10
int selectionSort(int [], int );
int main()
{ int nums[NUMEL] ={ 22,5,67,98,45,32,101,99,73,10};
int i, moves;
moves=selectionSort( nums, NUMEL);
printf("The sort listed,in asending order,is:\n");
for (i=0;i<NUMEL;i++)
printf(" %4d ", nums[i]);
printf("\n %d moves were made to sort this list \n",moves);
return 0;
}
int selectionSort(int num[], int numel)
{ int i, j, min, minidx, temp, moves =0;
for (i= 0;i<(numel-1); i++)
{ min= num[i]; // assume minimum is first element in sublist
minidx = i; // index of minimum element
for(j=i+1;j< numel;j++)
{ if (num[j]< min) // if we've located a lower value
{ min = num[j]; // Capture it
minidx =j;
}
}
if (min < num[i]) // check if we have a new minimum
{ temp = num[i]; // and if we do, swap values
num[i]= min;
num[minidx]= temp;
moves++;
}
}
return (moves);
}

