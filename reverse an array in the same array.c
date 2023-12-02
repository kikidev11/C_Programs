#include<stdio.h>
int main()
{
	int n,i,j,a[100],c;
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
		c=a[i];
		a[i]=a[j];
		a[j]=c;
		j--;
	}
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
	return 0;
}
