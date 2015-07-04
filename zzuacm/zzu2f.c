#include <stdio.h>
#include <math.h>
#define pi 3.141592657

int main()
{
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		printf("%d\n",(int)(ceil((n*log(n)-n+0.5*log(2*n*pi))/log(10))));
	}
	return 0;
}
