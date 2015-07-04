#include <stdio.h>

int MaxSum2(int m,int n);
int d[101][101];
int main()
{
	int n;
	int i,j;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=1;i<=n;i++)
			for(j=1;j<=n;j++)
				scanf("%d",&d[i][j]);
		printf("%d\n",MaxSum2(n,n));
	}
	return 0;
}

int MaxSum(int n,int a[])
{
	int sum=0,b=0;
	for(int i=1;i<=n;i++)
	{
		if(b>0) b+=a[i];
		else b=a[i];
		if(b>sum) sum=b;
	}
	return sum;
}

int MaxSum2(int m,int n)
{
	int sum=0;
	int b[101];
	for(int i=1;i<=m;i++)
	{
		for(int k=1;k<=n;k++)
			b[k]=0;
		for(int j=i;j<=m;j++)
		{
			for(int k=1;k<=n;k++)
				b[k]+=d[j][k];
			int max=MaxSum(n,b);
			if(max>sum)
				sum=max;
		}
	}
	return sum;
}
