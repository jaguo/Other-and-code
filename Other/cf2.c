#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmp(const void *a ,const void *b)
{
	return *(int *)a-*(int *)b;
}

int main()
{
	int n,i,j,sum;
	int a[3001];
	int b[6011];
	while(scanf("%d",&n)!=EOF)
	{
		sum=0;
		memset(b,0,sizeof(b));
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			b[a[i]]=1;
		}
		qsort(a,n,sizeof(a[0]),cmp);
		for(i=1;i<n;i++)
		{
			if(a[i]==a[i-1])
			{
				for(j=a[i];j<6000;j++)
				{
					if(b[j]==0)
					{
						b[j]=1;
						break;
					}
				}
				sum+=(j-a[i]);
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}
