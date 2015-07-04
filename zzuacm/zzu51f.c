#include <stdio.h>
#include <math.h>

int main()
{
	int m,n;
	while(scanf("%d%d",&m,&n)!=EOF)
	{
		if(m==n || (m-n)==1 || (n-m)==1)
			printf("0\n");
		else
			printf("1\n");
	}
	return 0;
}
