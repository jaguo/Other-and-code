#include <stdio.h>
#include <string.h>

int find(int a[], int l, int n);
int f(int a[],int i);

int main()
{
	int a[100];
	int i,m,n,l,count;
	while(scanf("%d%d",&m,&n)!=EOF)
	{
		memset(a,0,sizeof(a));
		count=0;
		for(i=2;i<=m;i++)
		{
			l=f(a,i);
			count+=find(a,l,n);
		}
		printf("%d\n",count);
	}
	return 0;
}

int find(int a[], int l, int n)
{
	int i,sum=0;
	for(i=0;i<l;i++)
		if(a[i]==n)
			sum++;
	return sum;
}

int f(int a[],int i)
{
	int ar[100],r;
	int *p=a,*pr=ar;
	memset(ar,0,sizeof(ar));
	r=10;
	while(1)
	{
		if(r/i==0)
		{
			if(p-a==0)
			{
				(*p++)=r/i;
				(*pr++)=r%i;
			}
			r=r*10;
		}
		if(r%i==0)
		{
			(*p++)=r/i;
			break;
		}
		else
		{
			(*p++)=r/i;
			(*pr++)=r%i;
			r=r%i;
		}
		if(find(ar,pr-ar,r)==2)
				break;
	}
	if(i%2==0 || i%5==0)
		return p-a;
	else
		return p-a-1;
}
