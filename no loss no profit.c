#include<stdio.h>
main()
{int cp,sp;
printf("enter the values of cp,sp");
scanf("%d %d",&cp,&sp);
if(cp>sp)
{
	printf("loss");
}
else if(sp>cp)
{
printf("profit");
} 
else
{
	printf("no profit no loss");
}
}
