
#include<stdio.h>


int main()
{
  int a=0,b=1,fib=0,n,i,sum=0;
  printf("Enter the Number = ");
  scanf("%d",&n);

  for(i=0;i<n;i++)
  {
  sum=a+b;
  a=b;
  b=sum;
  }
printf("%d ",a);
 return 0;
}

