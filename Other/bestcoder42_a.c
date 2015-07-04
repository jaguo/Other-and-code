#include <stdio.h>

int main()
{
	int data[31][31];
	int n,i,j;
	int sum,count;
	while(scanf("%d",&n)!=EOF)
	{
		sum=count=0;
		for(i=1;i<=n;i++)
			for(j=1;j<=n;j++)
				scanf("%d",&data[i][j]);
		for(i=1;i<=n;i++)
			for(j=i;j<=n;j++)
				if(data[i][j]==1)
					count++;
		sum=count*2+n*2;
		printf("%d\n",sum);
	}
	return 0;
}
