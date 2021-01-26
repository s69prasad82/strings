#include<stdio.h>
void main()
{
	int a[]={10,20,30,40};
	int i;
	int n=(sizeof(a)/sizeof(a[0]));

	int sum=0;

	for(i=0;i<4;i++)

	{
		sum=sum+a[i];
	}
	printf("%d",sum);
}

