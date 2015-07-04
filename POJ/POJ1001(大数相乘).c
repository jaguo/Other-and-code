#include <stdio.h>
#include <string.h>

int main()
{
	int i,j,x,y,n,d[160],e[160];
	char s[6];
	int sum,t,r;
	int dot=0;
	while(scanf("%s%d",s,&n)==2)
	{
		if(n==0) printf("1\n");
		else
		{
			t=1;sum=0;
			memset(d,0,sizeof(d));
			for(i=5;i>=0;i--)
			{
				if(s[i]=='.')
				{
					dot=5-i;
					continue;
				}
				sum+=t*(s[i]-'0');
				t*=10;
			}
			t=1;
			i=5;
			while(dot)
			{
				if(s[i--]=='0')
					t*=10;
				else
				{
					dot=i+dot-4;
					break;
				}
			}
			sum/=t;
			x=sum;
			i=0;
			if(sum==0) printf("0\n");
			else
			{
				while(x)
				{
					d[i++]=x%10;
					x/=10;
				}
				for(i=1;i<n;i++)
				{
					memset(e,0,sizeof(e));
					t=sum;
					y=0;
					while(t)
					{
						r=t%10;
						for(j=0;j<5*n;j++)
							e[y+j]+=d[j]*r;
						t/=10;
						y++;
					}
					for(j=0;j<5*n;j++)
						d[j]=e[j];
					for(j=0;j<5*n;j++)
					{
						d[j+1]+=d[j]/10;
						d[j]=d[j]%10;
					}
				}
				for(i=5*n;i>=0;i--)
				{
					if(d[i]==0 && i>dot*n)
						continue;
					if(d[i]==0)
					{
						printf(".");
						for(--i;i>=0;i--)
							printf("%d",d[i]);
					}
					else
					{
						for(;i>=0;i--)
						{
							if(i==dot*n-1)
								printf(".");
							printf("%d",d[i]);
						}
					}
				}
				putchar(10);
			}
		}
	}
	return 0;
}

