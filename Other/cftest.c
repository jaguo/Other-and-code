#include <stdio.h>

int main()
{
	int k,n,w;
	long long sum;
	while(scanf("%d%d%d",&k,&n,&w)!=EOF)
	{
		sum=k*w*(w+1)/2;
		int b=sum-n;
		if(b>0)
			printf("%d\n",b);
		else
			printf("0\n");
	}
	return 0;
}
