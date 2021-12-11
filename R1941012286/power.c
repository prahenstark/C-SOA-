#include <stdio.h>
#include <math.h>
#include "pow.h"

//double power(double x, double y);

int main() {

  int x,y,mul;
  double r;
  printf("Enter x and y: \n");
  scanf("%d%d", &x,&y);
  r=pow(x,y);
  mul=power(x,y);
  printf("Power of %d to %d is %lf and my power is %d\n",x,y,r,mul);
  return 0;

}


