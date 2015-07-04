#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int x[3]={1,1,0};
int y[3]={0,1,1};
char data[51][51];
int m,n;

int dfs(int p,int b)
{
	int i;
	int f,a,c,e;
	char ch;
	f=a=c=e=0;
	ch = data[p][b];
	switch(ch)
	{
		case 'f':f++;break;
		case 'a':a++;break;
		case 'c':c++;break;
		case 'e':e++;break;
	}
	for(i=0; i<3;i++)
	{
		if(b+x[i] > n || p+y[i] > m)
			break;
		ch = data[p+y[i]][b+x[i]];
		switch(ch)
		{
			case 'f':f++;break;
			case 'a':a++;break;
			case 'c':c++;break;
			case 'e':e++;break;
		}	
	}

	if(a==1 && f==1 && c==1 && e==1)
		return 1;
	return 0;
}

int main()
{
	int i,j;
	int count;
	while(scanf("%d%d",&m,&n) !=EOF)
	{
		memset(data,'\0',sizeof(data));
		count = 0;
		getchar();
		for(i=1;i<=m;i++)
		{
			for(j=1;j<=n;j++)
				scanf("%c",&data[i][j]);
			getchar();
		}
		for(i=1;i<=m;i++)
			for(j=1;j<=n;j++)
			{
				if(data[i][j] != 'x')
					if(dfs(i,j))	count ++;
			}
		printf("%d\n",count);
	}
	return 0;
}
