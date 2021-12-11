#include <stdio.h>
#include <stdlib.h>

void swap(int **a,int **b);

int main(void) {
  
  int num1,num2,c;

  printf("Enter the value of a : ");
  scanf("%d",&num1);
  printf("Enter the value of b : ");
  scanf("%d",&num2);

  int *p=&num1,*q=&num2;
  int **a=&p,**b=&q;

  //a=10;
  //b=20;

  printf("Before swapping a = %d and",num1);
  printf(" b = %d\n",num2);
  //p=&a;
  //q=&b;

  swap(&p, &q);


  return 0;

}


void swap(int **a, int **b) {

  int c;

  c=**a;
  **a=**b;
  **b=c;

  printf("After swapping a = %d",**a);
  printf(" and b= %d\n",**b);

}
