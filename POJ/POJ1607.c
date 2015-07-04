#include <stdio.h>

int main()
{
	int i,n;
	double sum;
	int yes=1;
	while(scanf("%d",&n)!=EOF)
	{
		if(yes)
		{
			printf("Cards  Overhang\n");
			yes=0;
		}
		sum=0.0;
		for(i=1;i<=n;i++)
			sum+=0.5/i;
		printf("%5d%10.3lf\n",n,sum);
	}
	return 0;
}
