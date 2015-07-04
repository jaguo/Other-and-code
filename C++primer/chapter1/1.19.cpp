#include <iostream>

int main()
{
	int m,n,sum=0;
	std::cout<<"Please input two numbers(a<b)	:";//<<std::endl;
	std::cin>>m>>n;
	if(m>n)
	{
		int t;
		t=m;
		m=n;
		n=t;
	}
	while(m<=n)
	{
		sum+=m;
		m++;
	}
	std::cout<<"sum is :"<<sum<<std::endl;
	return 0;
}


