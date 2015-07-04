#include <stdio.h>
#include <string.h>

int A[8]={0,1,2,3,4,5,6,7};
int b[4];
int ua[8],fa[8],ra[8];
void u(int a[]);
void f(int a[]);
void r(int a[]);

int main()
{
	int i,count,ok,n;
	char da[100];
	while(scanf("%d",&n)!=EOF)
	{
		scanf("%s",da);
		count=0;
		ok=1;
		memset(ua,0,sizeof(ua));
		memset(fa,0,sizeof(fa));
		memset(ra,0,sizeof(ra));
		while(1)
		{
			count++;
			for(i=0;da[i];i++)
				switch(da[i])
				{
					case 'U':u(A);break;
					case 'F':f(A);break;
					case 'R':r(A);break;
				}
			for(i=0;i<8;i++)
				if(!(A[i]==i && ua[i]%4==0 && fa[i]%4==0 && ra[i]%4==0))
				{
					ok=0;
					break;
				}
				else
					ok=1;
			if(ok)
				break;
		}
		if(ok)
			printf("%d\n",count);
	}
	return 0;
}

void u(int a[])
{
	b[0]=a[0];
	b[1]=a[1];
	b[2]=a[2];
	b[3]=a[3];
	a[0]=b[1];
	a[1]=b[2];
	a[2]=b[3];
	a[3]=b[0];
	ua[b[0]]++;
	ua[b[1]]++;
	ua[b[2]]++;
	ua[b[3]]++;
}

void f(int a[])
{
	b[0]=a[1];
	b[1]=a[5];
	b[2]=a[6];
	b[3]=a[2];
	a[1]=b[1];
	a[5]=b[2];
	a[6]=b[3];
	a[2]=b[0];
	fa[b[0]]++;
	fa[b[1]]++;
	fa[b[2]]++;
	fa[b[3]]++;
}

void r(int a[])
{
	b[0]=a[2];
	b[1]=a[6];
	b[2]=a[7];
	b[3]=a[3];
	a[2]=b[1];
	a[6]=b[2];
	a[7]=b[3];
	a[3]=b[0];
	ra[b[0]]++;
	ra[b[1]]++;
	ra[b[2]]++;
	ra[b[3]]++;
}
