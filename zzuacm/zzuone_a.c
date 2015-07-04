#include <stdio.h>

int main()
{
	int t,m,n,sum1,sum2,tmp,i;
	scanf("%d",&t);
	while(t--)
	{
		sum1=sum2=0;
		scanf("%d%d",&m,&n);
		for(i=0;i<m;i++)
		{
			scanf("%d",&tmp);
			sum1+=tmp;
		}
		for(i=0;i<n;i++)
		{
			scanf("%d",&tmp);
			sum2+=tmp;
		}
		if(sum1==sum2)
			printf("Draw\n");
		else if(sum1>sum2)
			printf("Calem\n");
		else
			printf("Serena\n");
	}
	return 0;
}
