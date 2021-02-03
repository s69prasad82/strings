
#include<stdio.h>
char *fun(int );
int main()
{
	int n;
	printf("Enter the input\n");
	scanf("%d",&n);
	printf("%s ",fun(n));
}
char *fun(int n)
{
	static char str[32];
	int i,j=0;
	for(i=31;i>=0;i--)
	{
		if(n&(1<<i))
		{
			str[j]='1';
			j++;	
		}
		else
		{
			str[j]='0';
			j++;
		}
	}
	return str;
}
