#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmp(const void *a,const void *b)
{
	return *(int *)a-*(int *)b;
}

int main()
{
	int n,count,a[4],x,y;
	int i,j,sub;
	while(scanf("%d",&n))
	{
		count=0;
		if(n==-1)
			break;
		printf("N=%d:\n",n);
		sub=n;
		for(i=0;sub;i++)
		{
			a[i]=sub%10;
			sub=sub/10;
		}
		if(n>9999 || n<1000)
			printf("No!!\n");
		else if(a[0]==a[1]&&a[0]==a[2]&&a[0]==a[3])
			printf("No!!\n");
		else
		{
			sub=1;
			while(sub!=0 && sub!=6174)
			{
				x=y=0;
				memset(a,0,sizeof(a));
				for(i=0;n;i++)
				{
					a[i]=n%10;
					n=n/10;
				}
				j=i;
				qsort(a,4,sizeof(a[0]),cmp);
				for(i=4-j;i<4;i++)
					x=x*10+a[i];
				for(i=3;i>=4-j;i--)
					y=y*10+a[i];
				sub=y-x;
				printf("%d-%d=%d\n",y,x,sub);
				n=sub;
				count++;
			}
			printf("Ok!! %d times\n",count);
		}
	}
	return 0;
}

