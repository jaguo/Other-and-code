#include <stdio.h>
#include <string.h>

int movex[8]={1,1,1,0,-1,-1,-1,0};
int movey[8]={1,0,-1,-1,-1,0,1,1};
int m,n;
char a[101][101];
int visit[101][101];

int isborder(int x,int y)
{
	if(x<0 || y<0 || x>=m || y>=n)
		return 1;
	else
		return 0;
}

void DFS(int x,int y)
{
	int i;
	if(a[x][y]=='*')
		return ;
	for(i=0;i<8;i++)
	{
		int nx=x+movex[i];
		int ny=y+movey[i];

		if(isborder(nx,ny) || visit[nx][ny])
			continue;
		visit[nx][ny]=1;
		if(a[nx][ny]=='@')
			DFS(nx,ny);
	}
}

int main()
{
	int i,j;
	int ans;
	while(scanf("%d%d",&m,&n)!=EOF)
	{
		getchar();
		if(m==0 && n==0)
			break;
		ans=0;
		memset(visit,0,sizeof(visit));
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
				scanf("%c",&a[i][j]);
			getchar();
		}

		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
			{
				if(!visit[i][j] && a[i][j]!='*')
				{
					DFS(i,j);
					ans++;
				}
			}
		printf("%d\n",ans);
	}
	return 0;
}
