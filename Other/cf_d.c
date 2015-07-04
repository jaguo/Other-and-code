#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#define maxn 5000001
int data[maxn];
int sum[maxn];

void f()
{
	int i,j,t,c;
	for(i=2;i<maxn;i++)
		if(!data[i])
			for(j=i,c=1;j<maxn;j+=i,c++)
			{
				t=c;
				while(1)
				{
					data[j]++;
					if(t%i) break;
					t=t/i;
				}
			}
	for(i=2;i<maxn;i++)
		sum[i]=sum[i-1]+data[i];
}
int main()
{
	int t,a,b;
	f();
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&a,&b);
		printf("%d\n",sum[a]-sum[b]);
	}
	return 0;
}
