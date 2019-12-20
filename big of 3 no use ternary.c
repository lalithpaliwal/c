#include<stdio.h>
int main()
{
	int a=1000,b=2000,c=300,d;
	d=(a>b&&a>c)?a:b>c?b:c;
	printf("%d",d);
	return 0;
}
