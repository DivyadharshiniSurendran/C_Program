#include<stdio.h>
int main()
{
	int i=5,j=7,temp;
	printf("before swapping the value of i=%d, j=%d",i,j);
        temp=i;
	i=j;
	j=temp;
	printf("after swapping the value of i=%d, j=%d",i,j);
	return 0;
}
