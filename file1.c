#include<stdio.h>
void main()
{
	int a[]={2,4,6,8};
	int i;
	int n=(sizeof(a)/sizeof(a[0]));

	for(i=5;i>2;i--)
	{
		int temp=a[i-1];
		a[i-1]=a[i];
		a[i]=temp;
	}
	a[i]=9;
	for(i=0;i<=4;i++)
	{
	printf("%d",a[i]);
	}

}
