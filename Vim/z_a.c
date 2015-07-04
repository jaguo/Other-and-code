#include <stdio.h>

int main()
{
	char date[80],*p;
	long int a,b;
	while(scanf("%s",date)!=EOF)
	{
		a=b=0;
		p=date;
		while(*p!='+')
		{
			a=(*p-'0')+a*10;
			p++;
		}
		p++;
		while(*p)
		{
			b=(*p-'0')+b*10;
			p++;
		}
		printf("%ld\n",a+b);
	}
	return 0;
}

