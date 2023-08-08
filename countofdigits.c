#include<stdio.h>
main()
{
	int c,n,r;
	printf("enter n");
	scanf("%d",&n);
	c=0;
	while(n!=0)
	{
		r=n%10;
		c=c+1;
		n=n/10;
	}
	printf("%d \n",c);
}
