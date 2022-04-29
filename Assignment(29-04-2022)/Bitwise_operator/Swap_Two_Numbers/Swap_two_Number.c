#include"Swap_two_Number.h"

int main()
{
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	printf("Before Swapping the two numbers:\na:%d\nb:%d\n",a,b);
	Swap_two_Number(&a,&b);
	printf("After Swapping the two numbers:\na:%d\nb:%d\n",a,b);
	return 0;
}
