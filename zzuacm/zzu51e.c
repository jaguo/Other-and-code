#include <stdio.h>
#include <string.h>

int main()
{
	int i,j,m,n;
	char a[11];
	while(scanf("%d%d",&m,&n) && (m||n ))
	{
		int count=0;
		memset(a,'\0',sizeof(a));
		for(i=m;i<=n;i++)
		{
			sprintf(a,"%d",i);
			for(j=0;a[j];j++)
			{
				if(a[j]=='2' && a[j+1]=='3')
				{
					count++;	
					break;
				}
				if(a[j]=='5')
				{
					count++;
					break;
				}
			}
		}
		printf("%d\n",count);
	}
	return 0;
}
