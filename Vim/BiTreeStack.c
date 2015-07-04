#include <stdio.h>
#include <stdlib.h>

typedef struct Node1{
	char data;
	struct Node1 *lchild;
	struct Node1 *rchild;
}*BiTree,Tree;

typedef struct Node2 {
	BiTree *top;
	BiTree *base;
	int stacksize;
}Stack,*pNode;

void CreateBiTree(BiTree *T);
void print1(BiTree T);
void print2(BiTree T);
void print3(BiTree T);
int yezijiedian(BiTree T);
int PostTreeDepth(BiTree T);
int InOrderTraverse(BiTree T);

int main()
{
	BiTree T;
	CreateBiTree(&T);
	printf("xian:");
	print1(T);
	putchar(10);
	printf("zhong:");
	print2(T);
	putchar(10);
	printf("hou:");
	print3(T);
	putchar(10);
	printf("zhongxu:");
	InOrderTraverse(T);
	putchar(10);
	printf("leaf:%d\n",yezijiedian(T));
	printf("Depth:%d\n",PostTreeDepth(T));
	return 0;
}

void InitStack(Stack *pS)
{
    (*pS).base=(BiTree*)malloc(10*(sizeof(BiTree)));
    if(!(*pS).base)
        exit(-2);
    (*pS).top=(*pS).base;
    (*pS).stacksize=10;
}

void Push(Stack *pS,BiTree T)
{
    if((*pS).top-(*pS).base>=(*pS).stacksize)
    {
        (*pS).base=(BiTree*)realloc((*pS).base,((*pS).stacksize+10)*sizeof(BiTree));
        if(!(*pS).base)
            exit(-2);
        (*pS).top=(*pS).base+(*pS).stacksize;
        (*pS).stacksize+=10;
    }
    *(*pS).top++=T;
}

int StackEmpty(Stack S)
{
    return S.top == S.base;
}

int Pop(Stack (*pS),BiTree *pT)
{
    if(StackEmpty(*pS))
        return 0;
    *pT=*(--(*pS).top);
    return 1;
}

int GetTop(Stack S,BiTree *pT)
{
    if(StackEmpty(S))
        return 0;
    (*pT)=*(S.top-1);
    return 1;
}

void CreateBiTree(BiTree *T)
{
     char ch;
     scanf("%c",&ch);
     if(ch==' ')  *T=NULL;
     else 
     {
          (*T)=(BiTree)malloc(sizeof(Tree));
          (*T)->data=ch;
          CreateBiTree(&((*T)->lchild));
          CreateBiTree(&((*T)->rchild));
     }
}


void print1(BiTree T)
{
     if(T)
     {
          printf("%c",T->data);          
          print1(T->lchild);
          print1(T->rchild);
     }
}
void print2(BiTree T)
{
     if(T)
     {
          print2(T->lchild);
          printf("%c",T->data);
          print2(T->rchild);
     }
}
void print3(BiTree T)
{
     if(T)
     {
          print3(T->lchild);
          print3(T->rchild);
          printf("%c",T->data);
     }
}
int yezijiedian(BiTree T)
{
     int a,b;
     if(T==NULL) return 0;
     else {
            if(T->lchild==NULL&&T->rchild==NULL) return 1;
            else{
                 a=yezijiedian(T->lchild);
                 b=yezijiedian(T->rchild);
                 return (a+b);
                 }
            }
}                
int PostTreeDepth(BiTree T)  
{
	int hl,hr,max;
	if(T!=NULL)
	{
		hl=PostTreeDepth(T->lchild); 
		hr=PostTreeDepth(T->rchild); 
		max=hl>hr?hl:hr;              
		return(max+1);             
	}
	else return(0);           
}

int InOrderTraverse(BiTree T)
{
    Stack S;
    BiTree p = NULL;
    InitStack(&S);
    Push(&S,T);
    while(!StackEmpty(S))
    {
        while(GetTop(S,&p)&&p)
            Push(&S,p->lchild);
        Pop(&S,&p);
        if(!StackEmpty(S))
        {
            Pop(&S,&p);
            printf("%c",p->data);
            Push(&S,(p->rchild));
        }
    }
    return 1;
}


