#include<stdio.h>
int main()
{
	int n,i,a[100],f,se;
	printf("enter n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter %d elements\n",i+1);
		scanf("%d",&a[i]);
	}
	printf("enter search elements");
	scanf("%d",&se);
	f=0;
	for(i=0;i<n;i++)
	if(se==a[i])
	{
		f=1;
		break;
	}
	if(f==1)
	printf("%d is found\n",se);
	else
	printf("%d is not found\n",se);
	
}
