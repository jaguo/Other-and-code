#include <stdio.h>
#include <string.h>

int main()
{
	int m,i,j,sum,n,a[101];
	scanf("%d",&m);
	while(m--)
	{
		memset(a,0,sizeof(a));
		sum=0;
		scanf("%d",&n);
		for(i=1;i<=n;i++)
			for(j=1;i*j<=n;j++)
				a[i*j]++;
		for(i=1;i<=n;i++)
			if(a[i]%2)
				sum++;
		printf("%d\n",sum);
	}
	return 0;
}
