#include <stdio.h>

int main()
{
	int i,n;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=2;i<n/2;i++)
		{
			if((n%i)==0)
			{
				printf("%d*",i);
				n=n/i;
				i--;
			}
		}
		printf("%d\n",n);
	}
	return 0;
}
