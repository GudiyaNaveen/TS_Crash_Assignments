#include"Toggle_n_Bit.h"

int main()
{
	int value,position;
	printf("Enter a number: ");
	scanf("%d",&value);
	printf("Enter postion to set the bit: ");
	scanf("%d",&position);
	Toggle_nth_Bit(value,position);
	return 0;
}
