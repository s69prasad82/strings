#include<stdio.h>
void main()
{
	char a[]="hello";
	char p[];
	int i;
	int n=(sizeof(a)/sizeof(a[0]));
	
	for(i=0;i<5;i++)
	{
		p[i]=a[i];
	}
	p[i]='\0';
	printf("%s",p);
}


