#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void *a,const void *b)
{
    int *c = (int *)a;
    int *d = (int *)b;
    if(*c != *d)
        return *c - *d;
    return *(d+1) - *(c+1);
}

int main()
{
	int n,m,i,j;
	int low,high;
	int q[100001],h[100001][2],flag[100001];
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		memset(flag,0,sizeof(flag));
		for(i=1;i<=n;i++)
		{
			scanf("%d",&h[i][0]);
			h[i][1]=i;
		}
		for(j=1;j<=m;j++)
			scanf("%d",&q[j]);

		qsort(h,n,sizeof(h[0]),cmp);
		
		for(i=1;i<=m;i++)
		{
			low=1;
			high=n;
			while(low!=high)
			{
				if(h[(low+high)/2][0] >= q[i])
					high=(low+high)/2;
				else
					low=(low+high)/2+1;
			}
			while(1)
				if(!flag[h[low][1]])
				{
					printf("%d\n",h[low][1]);
					flag[h[low][1]]=1;
					break;
				}
				else
					low++;
		}
	}
	return 0;
}

