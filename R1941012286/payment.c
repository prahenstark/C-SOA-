#include <stdio.h>
#include <math.h>

float payment(float principle,int nP ,float iR);

int main() {

  float price, iR;
  int nP;
  printf("Enter Purchase ammount : ");
  scanf("%f", &price);
  printf("Enter monthly interest rate : ");
  scanf("%f", &iR);
  printf("Enter total number of payment : ");
  scanf("%d", &nP);
  
  float principle=price-500.0;
  
  float pay=payment(principle, iR, nP);
  printf("Total amount of payment is %f \n", pay);

}

float payment(float principle,int nP ,float iR) {

  float pay= (iR*principle)/(1-pow(1+iR, -nP));
  
  return pay; 

}
