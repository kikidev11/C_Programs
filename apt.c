#include<stdio.h>
main()
{
	int m,n,s,r,f,i;
	printf("enter n");
	scanf("%d",&n);
	m=n;
	s=0;
	while(n!=0)
	{
		r=n%10;
		f=1;
		for(i=1;i<=r;i++)
		f=f*i;
		s=s+f;
		n=n/10;
	}
	if(m==s)
	printf("%d is apt\n",m);
	else
	printf("%d is not apt\n",m);
}
