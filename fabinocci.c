#include<stdio.h>
main( )
{
int a=0,b=1,c,n,i;
printf("enter:");
scanf("%d",&n);
printf("%d%d",a,b);
for(i=1;i<=n;i++)
{
	c=a+b;
	a=b;
	b=c;
	printf("%d\n",c);
	}
}