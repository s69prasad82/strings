#include<stdio.h>
void main()
{
	int arr[]={10,20,30,40,50};
	int sum=0;
	int i;
	for(i=0;i<5;i++)
	{
		sum=sum+arr[i];
	}
	printf("%d",sum);
}
