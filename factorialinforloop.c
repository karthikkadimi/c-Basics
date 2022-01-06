#include<stdio.h>
main()
{
	int i,n,product;
	scanf("%d",&n);
	for(i=1;1<=n && n<=13;i++)
	{
		product *= i;
	}
	printf("%d",product);
}
