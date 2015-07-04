#include <stdio.h>

int f(int n);

int A[7]={1,1,2,6,3,1,6};

int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		printf("%d\n",f(n)%7);
	}
	return 0;
}

int f(int n)
{
	int r=n%7;
	int s,a,t;
	if((n/7)%2==0)
		a=1;
	else
		a=6;
	if(n>=7)
	{
		t=f(n/7)%7;
		s=a*A[r]*t;
	}
	else
		return a*A[r];
	return s;
}

