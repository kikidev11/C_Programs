#include<stdio.h>
int main()
{
	int n,a[100],s,i;
	float avg;
	printf("enter n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter %d elements",i+1);
		scanf("%d",&a[i]);
	}
	s=0;
	for(i=0;i<n;i++)
	s=s+a[i];
	avg= (float) s/n;
	printf("avg = %f \t sum = %d\n",avg,s);
	return 0;
	
}
