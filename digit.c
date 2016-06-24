#include<stdio.h>
void main()
{
  int num,sum=0,r;
  printf("Enter a number:");
  scanf("%d",&num);
   for(;num!=0;num=num/10)
   {
      r=num%10;
      sum=sum+r;
  }
  printf("Sum of digits of number:%d",sum);
}
