#include<stdio.h>
int main()
{
	int n,i,j,a[100],b[100];
	printf("enter n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter %d elements",i+1);
		scanf("%d",&a[i]);
	}
	j=n-1;
	for(i=0;i<n;i++)
	{
		b[i]=a[j];
		j--;
	}
	for(i=0;i<n;i++)
	printf("%d\n",b[i]);
}
