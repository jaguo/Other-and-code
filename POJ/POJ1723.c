#include<stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
	return *(int*)a-*(int*)b;
}

int main()
{
	int n,i,x_mid, y_mid,count=0;
	int *x, *y;
	scanf("%d", &n);
	x=(int *)malloc(sizeof(int)*n);
	y=(int *)malloc(sizeof(int)*n);
	for(i=0; i<n; i++) 
		scanf("%d %d", &x[i], &y[i]);
	qsort(y, n, sizeof(int), cmp);
	qsort(x, n, sizeof(int), cmp);
	for(i=0; i<n; i++) x[i] -= i;
	qsort(x, n, sizeof(int), cmp);
	x_mid=x[n/2];
	y_mid=y[n/2];
	for(i=0; i<n; i++)
		count += abs(x[i]-x_mid) + abs(y[i]-y_mid);
	printf("%d\n", count);
	return 0;
}

