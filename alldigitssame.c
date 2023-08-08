#include<stdio.h>
main()
{
	int m,n,r,r1,f;
	printf("enter n");
	scanf("%d",&n);
	m=n;
	r1=n%10;
	f=1;
	while(n!=0)
	{
		r=n%10;
		if(r!=r1)
		{
			f=0;
			break;
		}
		n=n/10;
	}
	if(f==1)
	printf("%d all digits are same\n",m);
	else
	printf("%d all digits are not same\n",m);
}
