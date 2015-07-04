#include <stdio.h>

int main()
{
	char a[80];
	int i;
	while(scanf("%s",a)!=EOF)
	{
		for(i=0;a[i];i++)
			if(a[i]>='a' && a[i]<'z')
				a[i]=a[i]-32;
		puts(a);
	}
	return 0;
}
