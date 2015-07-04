#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct A{
	int next[27];
	int pn;
}point;

int main()
{
	int i,j,n;
	point node[28];
	while(scanf("%d",&n)!=EOF)
	{
		if(n == 0)
			break;
		getchar();
		char ch;
		for(i=1;i<=n;i++)
		{
			getchar();
			getchar();

			if(node[i].pn != 0)
				node[i].pn = 0;
			while((ch=getchar())!='\n')
			{
				j=ch-'A'+1;
				node[i].next[++node[i].pn] = j;
			}
		}

			int color[27];
			memset(color,0,sizeof(color));
			color[1]=1;
			int maxcolor = 1;

			for(i=1;i<=n;i++)
			{
				color[i]=n+1;
				int vist[27];
				memset(vist,0,sizeof(vist));

				for(j=1;j<=node[i].pn;j++)
				{
					int k=node[i].next[j];
					if(color[k])
						vist[color[k]] = 1;
				}

				for(j=1;i<=n;j++)
				{
					if(!vist[j] && color[i]>j)
					{
						color[i]=j;
						break;
					}
				}

				if(maxcolor < color[i])
					maxcolor = color[i];
			}
			if(maxcolor == 1)
				printf("1 channel needed.\n");
			else
				printf("%d channels needed.\n",maxcolor);
	}
	return 0;
}
