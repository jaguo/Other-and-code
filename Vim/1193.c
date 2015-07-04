#include <stdio.h>
int a[7], b[12], c[12], d[12], e[12];
int A[7]={1,1,2,6,3,1,6};
int f(int n);
int main()
{
	int i;
    int  n;
    a[0] = 1;
    for(i=1; i<7; i++){
        a[i] = (a[i-1]*i)%7;
    }
    
    b[0] = 1;
    c[0] = 1;
    d[0] = 1;
    e[0] = 1;
    for(i=1; i<=10; i++){
        b[i] = b[i-1] * 7;
        d[i] = (d[i-1] * 6)%7;
        e[i] = (e[i-1] * 1)%7;
        c[i] = i&1?6:1;
    }
    
	int m,t;
   for(m=100000;m<1000000000;m++){
		n=m;
        int ans = 1, k;
        int *p;
        for(i=10; i>=1; i--){
            if(n >= b[i]){
                k = n/b[i];
                
                if(i&1) p = d;
                else    p = e;
                
                ans = (ans * p[k] * a[k]) % 7;
                n %= b[i];
            }
        }
        ans = (ans * a[n]) % 7;
		t = f(m) % 7;
        if(ans != t)
		{
			printf("%d\n",m);
			printf("%d    %d\n",ans,t);
		}
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

