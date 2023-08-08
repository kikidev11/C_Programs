#include<stdio.h>
main()
{
	int m,n,s,r;
	printf("enter n:");
	scanf("%d",&n);
	m=n;
	s=0;
	while(n!=0)
	{
		r=n%10;
		s=s+r*r*r;
		n=n/10;
	}
	if(m==s)
	printf("%d is Armstrong\n",m);
	else
		printf("%d is not Armstrong\n",m);
}
