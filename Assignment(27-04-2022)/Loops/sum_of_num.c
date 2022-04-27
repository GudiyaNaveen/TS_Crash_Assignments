#include<stdio.h>
   int main()
   {
           int i=0,n,sum=0;
           while(i<10)
           {
           printf("enter num\n");
           scanf("%d",&n);
           if(n==0)
          break;
          else if(n<0)
          continue;
          else
          {
          sum=sum+i;
          i++;
          }
          }
          printf("%d\n",sum);
  }
