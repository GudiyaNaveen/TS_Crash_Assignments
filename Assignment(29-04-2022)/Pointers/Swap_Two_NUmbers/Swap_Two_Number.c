#include"Swap_Two_Number.h"

int main()
{
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	printf("Before Swapping two number:\na:%d\nb:%d\n",a,b);
	Swap_Two_Number(&a,&b);
	printf("Before Swapping two number:\na:%d\nb:%d\n",a,b);
	return 0;
}
