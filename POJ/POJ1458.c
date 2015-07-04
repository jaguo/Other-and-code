#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	//char x[201],y[201];
	char *x=(char *)malloc(202*sizeof(char));
	char *y=(char *)malloc(202*sizeof(char));
	int c[201][201];
	int i,j;
	while(scanf("%s%s",(x+1),(y+1))!=EOF)
	{
		int len_x=strlen(x);
		int len_y=strlen(y);
		memset(c,0,sizeof(c));
		for(i=0;i<=len_x;i++)
			c[i][0]=0;
		for(i=0;i<len_y;i++)
			c[0][i]=0;
		for(i=1;i<len_x;i++)
			for(j=1;j<len_y;j++)
			{
				if(x[i]==y[j])
					c[i][j]=c[i-1][j-1]+1;
				else if(c[i-1][j]>=c[i][j-1])
					c[i][j]=c[i-1][j];
				else
					c[i][j]=c[i][j-1];
			}
		printf("%d\n",c[len_x-1][len_y-1]);
	}
	return 0;
}
