#include<stdio.h>
#include<stdlib.h>
struct node{
	int pos;
	struct node* next;
};
struct {
	int data;
	struct node* first;
}a[100100];
int main()
{
	int i,j,n,m,x,len;
	struct node *p,*q;
	while(scanf("%d %d",&n,&m)==2)
	{
		len=0;
		for(i=1;i<=n;i++)
		  a[i].first=NULL;
		for(i=1;i<=n;i++)
		{
			scanf("%d",&x);
			for(j=0;j<len;j++)
				if(x==a[j].data)
				  break;
			if(j>=len)
			{
				p=(struct node*)malloc(sizeof(struct node));
				p->pos=i;
				p->next=NULL;
				a[len].data=x;
				a[len++].first=p;
			}
			else
			{
				p=a[j].first;
				while(p)
				{
					q=p;
					p=p->next;
				}
				p=(struct node*)malloc(sizeof(struct node));
				p->pos=i;
				p->next=NULL;
				q->next=p;	
			}
		}
			for(i=0;i<m;i++)
			{
				scanf("%d",&x);
				for(j=0;j<len;j++)
					if(x==a[j].data)
					  break;
				if(j>=len)
				  printf("-1\n");
				else
				{
					printf("%d\n",a[j].first->pos);
					a[j].first=a[j].first->next;
				}
			}
	}
	return 0;
}
