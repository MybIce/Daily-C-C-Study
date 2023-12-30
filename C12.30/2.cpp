#include <stdio.h>
int main()
{
	struct Monthdays
	{
		char name[10];
		int days;
	};
	struct Monthdays convert[12]={"January",31,"February",28,"March",31,"April",30,"May",31,"June",30,"July",31,"August",31,
	"September",30,"October",31,"November",30,"December",31};
	int i;
	for(i=0;i<12;i++)
	printf("%s %d\n",convert[i].name,convert[i].days);
	return 0;
}
