#include<stdio.h>
int main()
{
	int n,i,j,b1,b2,a[100];
	printf("enter n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter %d elements",i+1);
		scanf("%d",&a[i]);
	}
	b1=a[0];
	for(i=0;i<n;i++)
	if(a[i]>b1)
    b1=a[i];
    for(i=0;i<n;i++)
    if(a[i]<b1)
    {
    	b2=a[i];
    	break;
	}
	for(j=i;j<n;j++)
	
		if(a[j]>b2 && a[j]<b1)
		b2=a[j];
		printf("%d\t",b2);
		return 0;
	
    
}
