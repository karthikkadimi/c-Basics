#include<stdio.h>
int main()
{
int a,b,c;
printf("swap the numbers");
scanf("%d%d%d",&a,&b,&c);
a=b;
printf("%d\n",a=b);
b=c;
printf("%d\n",b=c);
c=a;
printf("%d\n",c=a);
 return 0;
}


