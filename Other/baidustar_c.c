#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node{
	int a1;
	int a2;
	int a3;
	int a4;
}ip[1100],ans[1100],res[1100];

int cmp(const void *c, const void *d)
{
	struct node *a=(struct node *)c;
	struct node *b=(struct node *)d;
	if(a->a1!=b->a1)	return a->a1-b->a1;
	if(a->a2!=b->a2)	return a->a2-b->a2;	
	if(a->a3!=b->a3)	return a->a3-b->a3;
	if(a->a4!=b->a4)	return a->a4-b->a4;
	return 0;
}

int main()
{
	int T,n,m;
	int i,j,count,c=1;
	scanf("%d",&T);
	while(T--)
	{
		memset(ip,0,sizeof(ip));
		scanf("%d%d",&n,&m);
		for(i=0;i<n;i++)
			scanf("%d.%d.%d.%d",&ip[i].a1, &ip[i].a2, &ip[i].a3, &ip[i].a4);
		for(i=0;i<m;i++)
			scanf("%d.%d.%d.%d",&ans[i].a1, &ans[i].a2, &ans[i].a3, &ans[i].a4);

		printf("Case #%d:\n",c++);
		for(i=0;i<m;i++)
		{
			count=0;
			memset(res,0,sizeof(res));

			for(j=0;j<n;j++)
			{
				res[j].a1 = ip[j].a1 & ans[i].a1;
				res[j].a2 = ip[j].a2 & ans[i].a2;
				res[j].a3 = ip[j].a3 & ans[i].a3;
				res[j].a4 = ip[j].a4 & ans[i].a4;
			}

			qsort(res,n,sizeof(res[0]),cmp);

			for(j=0;j<n-1;j++)
			{
				if((res[j].a1==res[j+1].a1)&&(res[j].a2==res[j+1].a2)&&(res[j].a3==res[j+1].a3)&&(res[j].a4==res[j+1].a4))
					count++;
			}

			printf("%d\n",n-count);
		}
	}
	return 0;
}
