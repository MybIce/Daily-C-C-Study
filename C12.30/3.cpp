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
	int m;
	scanf("%d",&m);
	if(m>1&&m<=12)
	printf("%s has %d days\n",convert[m-1].name,convert[m-1].days);
	return 0;
}
