#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int cmp(const void *_a ,const void *_b)
{
	double *a=(double*)_a;
	double *b=(double*)_b;
	if(a[0]-b[0]<0) return -1;
	else if(a[0]==b[0]) return 0;
	else return 1;
}

int main()
{
	int n,d,count=0;
	int i,ok,num;
	double a[1001][2],x,y,temp;
	while(scanf("%d%d",&n,&d)!=EOF)
	{
		memset(a,0,sizeof(a));
		if(n==0 && d==0)
			break;
		ok=0;
		if(d<0)
			ok=1;
		for(i=0;i<n;i++)
		{
			scanf("%lf%lf",&x,&y);
			if(d<y && !ok)
			    ok=1;
			a[i][0]=(x-sqrt((double)(d*d-y*y)));
			a[i][1]=(x+sqrt((double)(d*d-y*y)));
		}
		qsort(a,n,sizeof(a[0]),cmp);
		for(i=0;i<n;i++)
		num=1;
		temp=a[0][1];
		for(i=1;i<n;i++)
		{
				if(a[i][0] - temp > 1e-5)
				{
					num++;
					temp=a[i][1];
				}
				else
				{
					if(a[i][1] - temp < 1e-5)
						temp=a[i][1];
				}
		}
		count++;
		if(ok)
		{
			printf("Case %d: -1\n",count);
		}
		else
			printf("Case %d: %d\n",count,num);
	}
	return 0;
}
