#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmp(const void *a,const void *b)
{
	return *(int *)a-*(int *)b;
}

int dp[110][70];

int main()
{
	int t,n,k,i,j;
	int b[70];
	scanf("%d",&t);
	while(t--)
	{
		memset(b,0,sizeof(b));
		scanf("%d%d",&n,&k);
		for(i=0;i<n;i++)
			scanf("%d",&b[i]);
		b[i]=1000;

		qsort(b,n,sizeof(b[0]),cmp);

		for(i=0;i<=k;i++)
		{
			for(j=0;j<=n;j++)
			{
				if(b[0]<=i)
					dp[i][0]=1;
			}
		}

		for(i=1;i<=100;i++)
		{
			for(j=0;b[j]<=120;j++)
			{
				if(b[j]>i)
				{
					dp[i][j]=dp[i][j-1];
					continue;
				}
				if(j==0)
					dp[i][j]=1;
				else
					dp[i][j]=dp[i-b[j]][j-1]+dp[i][j-1];
			}
		}

		for(i=0;i<10;i++)
		{
			for(j=0;j<10;j++)
				printf("%3d ",dp[i][j]);
			putchar(10);
		}

		for(i=0;b[i]<=k;i++){
		}
		i--;
		printf("%d\n",dp[k][i]);
	}
	return 0;
}
