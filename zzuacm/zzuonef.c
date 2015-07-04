#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a,const void *b)
{
	return *(int *)a-*(int *)b;
}

int main()
{
	int T,n,l,h,m,s,i,tmp;
	int a[20000][2],b[20000];
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d%d",&n,&l);
		for(i=0;i<n;i++)
		{
			scanf("%d:%d:%d",&h,&m,&s);
			a[i][1]=i+1;
			a[i][0]=3600*h+60*m+s;
		}
		qsort(a,n,sizeof(a[0]),cmp);
		tmp=a[0][0];
		int count=0;
		for(i=0;i<n;i++)
		{
			if(tmp<=a[i][0])
			{
				b[count]=a[i][1];
				count++;
				tmp=a[i][0]+l;
			}
		}
		qsort(b,count,sizeof(b[0]),cmp);
		printf("%d\n",count);
		printf("%d",b[0]);
		for(i=1;i<count;i++)
			printf(" %d",b[i]);
		putchar(10);
	}
	return 0;
}
