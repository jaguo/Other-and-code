#include <stdio.h>
#include <string.h>

int main()
{
	int m,n,i,j,k,min;
	int a[311][31],d[311][311],p[311];
	scanf("%d%d",&m,&n);
	memset(a,0,sizeof(a));
	memset(d,0,sizeof(d));
	for(i=1;i<=m;i++)
		scanf("%d",&p[i]);
	for(i=1;i<m;i++)
		for(j=i+1;j<=m;j++)
			d[i][j]=d[i][j-1]+p[j]-p[(i+j)/2];
	for(i=1;i<=m;i++)
	{
		a[i][1]=d[1][i];
		a[i][i]=0;
	}
	for(i=2;i<=m;i++)
		for(j=2;j<=n;j++)
		{
			min=100000;
			for(k=j-1;k<i;k++)
				if(min>a[k][j-1]+d[k+1][i])
					min=a[k][j-1]+d[k+1][i];
			a[i][j]=min;
		}
	printf("%d\n",a[m][n]);
	return 0;
}

