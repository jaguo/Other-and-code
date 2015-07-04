#include <stdio.h>
#include <string.h>

int main()
{
	//char start[6]="START";
	//char end[4]="END";
	char endofinput[11]="ENDOFINPUT";
	char data[200],*p;
	char tem[11];
	scanf("%s",tem);
	getchar();
	while(strcmp(tem,endofinput)!=0)
	{
		gets(data);
		p=data;
		while(*p)
		{
			if(*p >= 'A' && *p <= 'Z')
				if(*p-'A'>= 5)
					*p-=5;
				else
					*p+=21;
			p++;
		}
		gets(tem);
		printf("%s\n",data);
		gets(tem);
	}
	return 0;
}
