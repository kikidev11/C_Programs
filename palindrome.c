#include<stdio.h>
main()
{
	int n,m,s,r;
	printf("enter n");
	scanf("%d",&n);
	m=n;
	s=0;
	while(n!=0)
	{
		r=n%10;
		s=s*10+r;
		n=n/10;
	}
	if(s==m)
	printf("%d is palindrome\n",m);
	else
	printf("%d not an palindrome\n",m);
}
