#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three numbers:\n");
	scanf("%d%d%d",&a,&b,&c);
	if((a>=b)&&(a>=c))
	{
		printf("a is largest\n");
	}
	else if((b>=c)&&(b>=a))
	{
		printf("b is largest\n");
	}
	else
	{
		printf("c is largest\n");
	}
	return 0;
}
