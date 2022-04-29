#include"Get_n_Bit.h"

int main()
{
	int value,position;
	printf("Enter a number: ");
	scanf("%d",&value);
	printf("Enter position to get the nth bit: ");
	scanf("%d",&position);
	Get_nth_Bit(value,position);
	return 0;
}
