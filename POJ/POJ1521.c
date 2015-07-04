#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
	int weight;
	int lchild;
	int rchild;
	int p;
	int flag;
}Node;

Node huff[2000];
char data[1000];

int cmp(const void *a,const void *b)
{
	return *(int *)b-*(int *)a;
}

void CreatHuff(int n)
{
	int r,l;
	int i,k,min1,min2;
	for(k=n+1;k<=2*n-1;k++)
	{
		min1=min2=1001;
		for(i=1;i<k;i++)
		{
			if(!huff[i].flag)
			{
				if(huff[i].weight < min1)
				{
					min2=min1;
					l=r;
					min1=huff[i].weight;
					r=i;
				}
				else if(huff[i].weight < min2)
				{
					min2=huff[i].weight;
					l=i;
				}
			}
		}
		huff[r].p=k;
		huff[l].p=k;
		huff[k].rchild=r;
		huff[k].lchild=l;
		huff[k].weight=huff[r].weight+huff[l].weight;
		huff[r].flag=huff[l].flag=1;
	}

	int sum=0;
	int len=strlen(data);
	for(i=1;i<=n;i++)
	{
		int count=0;
		int j=i;
		while(huff[j].p)
		{
			count++;
			j=huff[j].p;
		}
		if(count==0)
			count++;
		sum+=count*huff[i].weight;
	}
	printf("%d %d %.1f\n",len*8,sum,(len*8.0)/sum);
}

int main()
{
	int b[30];
	int i,j;
	while(scanf("%s",data))
	{
		if(!strcmp(data,"END"))
			break;
		i=0;
		memset(b,0,sizeof(b));
		memset(huff,0,sizeof(huff));
		while(data[i])
		{
			if(data[i]=='_')
				b[26]++;
			else
				b[data[i]-'A']++;
			i++;
		}
		qsort(b,30,sizeof(b[0]),cmp);
		i=j=0;
		while(b[j])
		{
			huff[++i].weight=b[j];
			j++;
		}
		CreatHuff(j);
	}
	return 0;
}
