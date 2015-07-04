#include <stdio.h>

int main()
{
	char ch;
	int count=0;
	while((ch=getchar())!=EOF)
	{
		if(ch=='\n')
			count=0;
		if(ch=='S')
		{
			count++;
		}
		if(ch=='C')
		{
			getchar();
			count++;
		}
		if(ch!='S' && ch!='C')
		{
			if(count%2==0)
				printf("%c",ch);
			else
				printf("%c",ch-'a'+'A');
		}
	}
	return 0;
}
