#include<stdio.h>
int main()
{
	int n,s,r;
	printf("enter n");
	scanf("%d",&n);
	s=0;
	while(n!=0)
	{
		r=n%10;
		s=s*10+r;
		n=n/10;
	}
	printf("%d",s);
	
}
