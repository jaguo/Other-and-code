#include <stdio.h>

int main()
{
	int N,p,m,i;
	int s1,min;
	while(scanf("%d",&N)!=EOF)
	{
		s1=min=0;
		for(i=0;i<N;i++)
		{
			scanf("%d%d",&p,&m);
			if(p)
				min+=m;
			else
				min-=m;
			if(min<s1)
				s1=min;
		}
		if(s1<0)
			printf("%d\n",-s1);
		else
			printf("0\n");
	}
	return 0;
}
