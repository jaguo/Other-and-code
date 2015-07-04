#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int dp[210][210];
int b[210];
int f();
int main()
{
	f();
	int i,j,n;
	memset(dp,0,sizeof(dp));
	for(i=0;i<=200;i++)
		dp[0][i]=1;

	for(i=2;i<=200;i++)
	{
		for(j=0;b[j]<=200;j++)
		{
			if(b[j]>i)
			{
				dp[i][j]=dp[i][j-1];
				continue;
			}
			if(j==0)
				dp[i][j]=dp[i-b[j]][j];
			else
				dp[i][j]=dp[i-b[j]][j]+dp[i][j-1];
		}
	}
	
	while(scanf("%d",&n)!=EOF)
	{
			for(i = 0;b[i] <= n;i++){
			}
			i--;
			printf("%d\n",dp[n][i]);
	}
	return 0;
}

int f()
{
	int i=0,j,k,ok;
	for(j=2;j<200;j++)
	{
		ok=1;
		for(k=2;k<j;k++)
			if(j%k == 0)
			{
				ok=0;
				break;
			}
		if(ok)
			b[i++]=j;
	}
	b[j]=100000000;
	return 0;
}
