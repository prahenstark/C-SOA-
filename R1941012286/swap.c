#include <stdio.h>

void swap(int num1,int num2);

int main() {

  int a, b;
  printf("Enter first number : ");
  scanf("%d", &a);
  printf("Enter second number : ");
  scanf("%d", &b);
  printf("Two numbers scanned are %d and %d \n",a,b);
  swap(a,b);
  
 return 0;

}


void swap(int num1, int num2) {

  num1=num1+num2;
  num2=num1-num2;
  num1=num1-num2;
  
  printf("After swapping first number is %d \n And second number is %d\n",num1,num2);

}
