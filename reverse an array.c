#include<stdio.h>
int main()
{
	int n,i,a[100];
	printf("enter n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter %d elements\n",i+1);
		scanf("%d",&a[i]);
	}
	for(i=n-1;i>=0;i--)
	printf("%d\n",a[i]);
	
}
