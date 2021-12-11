#include <stdio.h>
#include <stdlib.h>

int main(void) {
  
  int a,b,c;
  int *p,*q;

  printf("Enter the value of a : ");
  scanf("%d",&a);
  printf("Enter the value of b : ");
  scanf("%d",&b);

  //a=10;
  //b=20;

  printf("Before swapping a = %d and",a);
  printf(" b = %d\n",b);
  p=&a;
  q=&b;

  c=*p;
  *p=*q;
  *q=c;

  printf("After swapping a = %d",*p);
  printf(" and b= %d\n",*q);

  return 0;

}
