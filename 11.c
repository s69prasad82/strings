#include<stdio.h>
void main()
{
	int a[]="hello";
	int p[];
	int i;
	for(i=0;i<5;i++)
	{
		p[i]=a[i];
	}
	printf("hello world\n");
	p[i]='\0';
	printf("%s",p);
}
