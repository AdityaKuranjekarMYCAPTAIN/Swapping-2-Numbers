#include<stdio.h>
main()
{
	int a,b;
	printf("Enter two numbers:\n");
	scanf("%d%d",&a,&b);
	printf("Before Swapping a=%d  b=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping a=%d  b=%d\n",a,b);
	return 0 ;
}
