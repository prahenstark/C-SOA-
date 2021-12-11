#include <stdio.h>
#include <math.h>

float factorial(int num);

int main() {

  int num;
  printf("Enter the number : ");
  scanf("%d", &num);
  
  float fact=factorial(num);
  printf("%d equals approximatly %f \n",num ,fact);

}

float factorial(int num) {

  float e=2.71, pi=3.14;

  float fact= pow(num,num)*pow(e,-num)*pow(((2*num)+(1/3))*pi ,0.5);
  
  return fact; 

}
