#include<stdio.h>

void swap(int *,int *);

int main()
{
	int x,y;
	printf("Enter a number: ");
	scanf("%d%d",&x,&y);
	printf("before swapping of two numbers:\nx:%d\ny:%d\n",x,y);
	swap(&x,&y);
	printf("After swapping of two numbers:\nx:%d\ny:%d\n",x,y);
	return 0;
}

void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
