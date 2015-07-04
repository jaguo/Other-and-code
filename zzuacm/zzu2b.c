#include <stdio.h>
#include <stdlib.h>

struct ST{
	int x;
	int y;
	int flag;
};

int cmp( const void *a , const void *b )
{
	struct ST *c = (struct ST *)a; 
	struct ST *d = (struct ST *)b;
	if(c->x != d->x)
		return c->x - d->x;
	else
		return c->y - d->y;
}

int main()
{
	int t,n,i,j,count,max;
	scanf("%d",&t);
	while(t--)
	{
		count=0;
		scanf("%d",&n);
		struct ST *a=(struct ST *)malloc(sizeof(struct ST)*n);
		for(i=0;i<n;i++)
		{
			scanf("%d%d",&((a+i)->x),&((a+i)->y));
			a[i].flag=0;
		}
		qsort(a,n,sizeof(struct ST),cmp);
		max=0;
		for(i=n-1;i>=0;i--)
		{
			if(!a[i].flag)
			{
				a[i].flag =1;
				count++;
				max=a[i].y;
				for(j=i-1;j>=0;j--)
				{
					if(!a[j].flag && max >= a[j].y)
					{
						max=a[j].y;
						a[j].flag = 1;
					}
				}
			}
		}
		printf("%d\n",count);
		free(a);
	}
	return 0;
}
