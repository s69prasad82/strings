
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[]="how are you";
	int i,n=strlen(str);
	for(i=n-1;i>=0;i--)
	{
		if(str1[i]==' ')
		{
		str1[i]='\0';
		printf("%s ",&(str1[i])+1);
		}
	}
	printf("%s ",str1);
}



