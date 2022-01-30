#include<stdio.h>
int main()
{
	int n,i,fact=1;
	do{
		printf("Enter a number: ");
		scanf("%d",&n);
	}while(n<0);
	for(i=0;i<=n;++i){
		fact*=i;
	}
	printf("%d!=%d\n",n,fact);
	return 0;
}
