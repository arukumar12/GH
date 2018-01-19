#include <stdio.h>

int main(void) {
	int a,b,c,e,d=0;
	printf("enter n.o");
	scanf("%d",&a);
	a=b;
	while(a!0)
	{
		c=a%10;
		d=d*10+c;
		a=a/10;
		
	}
	if(d==b )
	{
		printf("yes");
		
	}
	else
	{
		printf("no");
	}
	}
	return 0;
}
