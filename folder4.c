#include<stdio.h>
void main()
{
	char a="hello";
	int i,j;

	for(i=0;j=strlen(a)-1,i<j;i++,j--)
	{
		int temp=a[i];
			a[i]=a[j];
			a[j]=temp;
	}
	printf("%s",a);
}
