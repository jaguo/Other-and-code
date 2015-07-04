#include <stdio.h>
#include <stdlib.h>

int comp(const void *a,const void *b)
{
  return *(int *)a-*(int *)b;
}

int main()
{
	int m,n,i,t;
	while(scanf("%d%d",&m,&n)!=EOF)
	{
		int *a=(int *)malloc(sizeof(int)*(m+n));
		for(i=0;i<(m+n);i++)
			scanf("%d",(a+i));
		qsort(a,m+n,sizeof(int),comp);
		printf("%d",a[0]);
		t=a[0];
		for(i=1;i<(m+n);i++)
		{
			if(a[i]!=t)
			{
				printf(" %d",a[i]);
				t=a[i];
			}
		}
		putchar(10);
	}
	return 0;
}
