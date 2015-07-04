#include <stdio.h>
#include <time.h>

int date[5][5];

int main ()
{
	FILE *fp;
	//fp=fopen("shuju.txt","r");
	int i,j,k,t,max,ok,m=1;
	while(m)
	{
		unsigned int seek=srand((unsigned)time(NULL));
		for(i=0;i<5;i++)
			for(j=0;j<5;j++)
				date[i][j]=rand(seek)%100;
		//fscanf(fp,"%d",&date[i][j]);
		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
				printf("%2d ",date[i][j]);
			putchar(10);
		}
		for(i=0;i<5;i++)
		{
			ok=1;
			max=date[i][0];
			t=0;
			for(j=0;j<5;j++)
				if(date[i][j]>max)
				{
					max=date[i][j];
					t=j;		  
				}
			for(k=0;k<5;k++)
				if(date[k][t]<max)
				{
					ok=0;
					break;
				}
			if(ok)
			{
				printf("%d\n",date[i][t]);
				m=0;
			}
			//printf("no\n");		 
		}
		putchar(10);
	}
	return 0;
}

