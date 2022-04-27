#include<stdio.h>
int main()
{
	unsigned char ch1=-20;	
	unsigned char ch2=289;
	signed char ch3=130;
	signed char ch4=-140;
	unsigned short int i1=-20;
	unsigned short int i2=65540;
	signed short int i3=32769;
	signed short int i4=-32769;
	unsigned long int l1=4294967298;
	unsigned long int l2=-30;
	signed long int l3=2147483660;
	signed long int l4=-2147483660;
	float f1=10,f2=10.11;
	double d1=11,d2=11.111;
	printf("%d\t %d\t %d\t %d\n" ,ch1,ch2,ch3,ch4);
	printf("%hu\t %hu\t %hd\t %hd\n", i1,i2,i3,i4);
	printf("%lu\t %lu\t %ld\t %ld\n",l1,l2,l3,l4);
	printf("%f\t %f\n",f1,f2);
	printf("%f\t %f\n",d1,d2);
}	

