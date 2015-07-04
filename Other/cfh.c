#include <stdio.h>

#define m(x) ((x>0)?(x):(-x))

int main()
{
	double ans;
	int a,b,c,d;
	long long t1,t2;
	while(scanf("%d%d%d%d",&a,&b,&c,&d) !=EOF)
	{
		t1=a+c;
		t2=b+d;
		//t1=m(a)+m(c);
		//t2=m(b)+m(d);
		double x1 = (b*t1-a*t2)*1.0/(t1+t2);
		double x2 = (c*t2-d*t1)*1.0/(t1+t2);
		printf("%.10f\t%.10f\n",x1,x2);
		if(x1 < 0)	x1=-x1;
		if(x2 < 0)	x2=-x2;
		if (x1 > x2)
			ans = x1;
		else 
			ans = x2;
		if(t1==0 && t2==0)
			ans = 0;
		printf("%.10f\n",ans);
	}
	return 0;
}
