#include <stdio.h>
#define pi 3.14
#define area_circle(pi,r) pi*r*r
#define area_square(s) s*s
#define area_rectangle(l,b) l*b

typedef struct
{
	char name[20];
	int roll;
}student;

int main()
{
    typedef enum{circle=2,square=3,rectangle=4,all=1}area;
    area i;
    int r,s,l,b;
    student s1[3];
    int x;
    for(x=0;x<3;x++)
    {
    	printf("Enter name and rollno: ");
    	scanf("%s%d",s1[x]->name,s1[x]->roll);
    }
    printf("Student data: ")
    for(x=0;x<3;x++)
    {
    	printf("%s %d\n",s1[x]->name,s1[x]->roll);
    }
    printf("Enter radius of circle: ");
    scanf("%d",&r);
    printf("Enter Side of your square: ");
    scanf("%d",&s);
    printf("Enter length and breadth of rectangle: ");
    scanf("%d%d",&l,&b);
    printf("1.All Areas of Circle, Square and Rectangle\n0.Exit\n");
    printf("Enter above choices: ");
    scanf("%d",&i);
    switch(i)
    {
    	case circle: printf("area of circle: %f\n",area_circle(pi,r));
    	             break;
    	case square: printf("area of square: %d\n",area_square(s));
    	             break;
    	case rectangle: printf("area of rectangle: %d\n",area_rectangle(l,b));
                        break;
        default:  break;
    }
    
    return 0;
}
