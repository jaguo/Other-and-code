#include <stdio.h>
int ans(int n)
{
	return n*(n-1)/2;
}
int main()
{
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		printf("%d\n",ans(n/2)+ans(n-n/2));
	}
	return 0;
}
