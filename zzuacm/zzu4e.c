#include <stdio.h>
#include <stdlib.h>

int main()
{
	int d,i,j,n,a[100000];
	scanf("%d",&d);
	while(d--)
	{
		scanf("%d",&n);
		for(i=0;n;i++)
		{
			a[i]=n%2;
			n=n/2;
		}
		for(j=0;j<i;j++)
			if(a[j])
			{
				printf("%d",j);
				break;
			}
		for(j++;j<i;j++)
			if(a[j])
				printf(" %d",j);
		putchar(10);
	}
	return 0;
}
