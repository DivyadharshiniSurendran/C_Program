#include<stdio.h>
int main()
{
	int i,j;
	printf("enter two numbers");
	scanf("%d %d",&i,&j);
	printf("before swapping the value of i=%d, j=%d",i,j);
	i=i+j;
	j=i-j;
	i=i-j;
	printf("after swapping the value of i=%d, j=%d",i,j);
	return 0;
}

