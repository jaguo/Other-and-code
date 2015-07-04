#include<stdio.h>
#include <malloc.h>
#include <conio.h>
typedef int DataType; 
typedef struct Node
{
	DataType data;
	struct Node *LChild;
	struct Node *RChild;
}BitNode,*BitTree;
void CreatBiTree(BitTree *bt)//用扩展先序遍历序列创建二叉树，如果是#当前树根置为空，否则申请一个新节点//
{
	char ch;
	ch=getchar();
	if(ch=='.') *bt=NULL;
	else
	{
		*bt=(BitTree)malloc(sizeof(BitNode));
		(*bt)->data=ch;
		CreatBiTree(&((*bt)->LChild));
		CreatBiTree(&((*bt)->RChild));
	}
}
void Visit(char ch)//访问根节点
{
	printf("%c  ",ch);
}
void  PreOrder(BitTree root) /*先序遍历二叉树, root为指向二叉树(或某一子树)根结点的指针*/
{
	if (root!=NULL)
	{
		Visit(root ->data);  /*访问根结点*/
		PreOrder(root ->LChild);  /*先序遍历左子树*/
		PreOrder(root ->RChild);  /*先序遍历右子树*/
	}
}
void  InOrder(BitTree root)  
	/*中序遍历二叉树, root为指向二叉树(或某一子树)根结点的指针*/
{
	if (root!=NULL)
	{
		InOrder(root ->LChild);   /*中序遍历左子树*/
		Visit(root ->data);        /*访问根结点*/
		InOrder(root ->RChild);   /*中序遍历右子树*/
	}
}

void  PostOrder(BitTree root)  
	/* 后序遍历二叉树，root为指向二叉树(或某一子树)根结点的指针*/
{
	if(root!=NULL)
	{
		PostOrder(root ->LChild); /*后序遍历左子树*/
		PostOrder(root ->RChild); /*后序遍历右子树*/
		Visit(root ->data);       /*访问根结点*/
	}
}
int PostTreeDepth(BitTree bt)   //后序遍历求二叉树的高度递归算法//
{
	int hl,hr,max;
	if(bt!=NULL)
	{
		hl=PostTreeDepth(bt->LChild);  //求左子树的深度 
		hr=PostTreeDepth(bt->RChild);  //求右子树的深度 
		max=hl>hr?hl:hr;              //得到左、右子树深度较大者
		return(max+1);               //返回树的深度
	}
	else return(0);              //如果是空树，则返回0
}

void PrintTree(BitTree Boot,int nLayer)  //按竖向树状打印的二叉树 //
{
	int i;
	if(Boot==NULL) return;
	PrintTree(Boot->RChild,nLayer+1);
	for(i=0;i<nLayer;i++)
		printf("  ");
	printf("%c\n",Boot->data);
	PrintTree(Boot->LChild,nLayer+1);
}
int main()
{
	BitTree T;
	int h;
	int layer;
	//int treeleaf;
	layer=0;
	printf("input char . is null):\n");
	CreatBiTree(&T);
	printf("xianxu:\n");
	PreOrder(T);
	printf("zhongxu:");
	InOrder(T);
	printf("houxu:");
	PostOrder(T);
	h=PostTreeDepth(T);
	printf("\nThe depth of this tree is:%d\n",h);
	PrintTree(T,layer);
	return 0;
}
