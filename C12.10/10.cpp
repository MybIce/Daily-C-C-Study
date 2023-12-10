#include <stdio.h>
#include <string.h>
#define SIZE 999
int main()
{
	int maxlength;
	void concat(char [],char [],int);
	char string1[SIZE],string2[SIZE];
	printf("Enetr the maxlength of string1:");
	scanf("%d",&maxlength);
	printf("\nEnetr string1:");
	scanf("%s",string1);
	printf("\nEnter string2:");
	scanf("%s",string2);
	concat(string1,string2,maxlength);
	return 0;
}
void concat(char string1[],char string2[],int maxlength)
{
	int len1,len2,num,i;
	len1=strlen(string1);
	len2=strlen(string2);
	if(len1+len2<=maxlength)
	strcat(string1,string2);
	else
	{num=maxlength-1-len1;
	strncat(string1,string2,num);
	string1[maxlength-1]=NULL;}
	printf("%s",string1);
}
