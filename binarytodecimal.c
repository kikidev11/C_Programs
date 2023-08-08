#include<stdio.h>
#include<math.h>

main()
{
	int i,s,r,n;
	printf("enter n:");
	scanf("%d",&n);
	i=0;
	s=0;
	while(n!=0)
	{
		r=n%10;
		s=s+r*pow(2,i);
		n=n/10;
		i++;
		
	}
	printf("%d",s);
}
