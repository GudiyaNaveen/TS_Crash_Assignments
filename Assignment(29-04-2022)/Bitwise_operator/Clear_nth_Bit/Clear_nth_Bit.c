#include"Clear_n_Bit.h"

int main()
{
	int value,position;
	printf("Enter a number: ");
	scanf("%d",&value);
	printf("Enter postion to set the bit: ");
	scanf("%d",&position);
	Clear_nth_Bit(value,position);
	return 0;
}
