#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char downChar(char ch)
{
	if(ch>='A' && ch<= 'Z')
		return (char)(ch + ('a' - 'A'));
	else
		return ch;
}

int main()
{
	char s1[101],s2[101],s3[50000];
	int i,p,q;
	while(gets(s1))
	{
		gets(s2);
		gets(s3);
		i=q=0;
		while(s3[i])
		{
			p=i;
			q=0;
			while(s1[q]&&s3[p])
			{
				if(downChar(s3[p])==downChar(s1[q]))
				{
					p++;
					q++;
				}
				else
				{
					q=0;
					printf("%c",s3[i]);
					i++;
					p=i;
				}
			}
			if(s3[i])
				printf("%s",s2);
			i=p;
		}
		putchar(10);
	}
	return 0;
}
