#include <stdio.h>

int main()
{
	int m,n,count,t,ok;
	while(scanf("%d%d",&m,&n) && (m||n))
	{
		count=0;
		ok=0;
		while(m && n)
		{
			count++;
			t=(m>n)?(m/n-1):(n/m-1);
			if(t && (m%n!=0 && n%m !=0))
				ok=count;
			if(m>n)
				m=m%n;
			else
				n=n%m;
		}
		if(ok==0)
		{
			if(count%2!=0)
				printf("Captain\n");
			else
				printf("Big Pang Pang\n");
		}
		else
		{
			if(ok%2!=0)
				printf("Captain\n");
			else
				printf("Big Pang Pang\n");
		}
	}
	return 0;
}
