#include <stdio.h>
#include <math.h>

int main() {

  int a,b,c;
  double root1,root2;
  printf("Enter the value of a : ");
  scanf("%d", &a);
  printf("Enter the value of b : ");
  scanf("%d", &b);
  printf("Enter the value of c : ");
  scanf("%d", &c);


  double disc=(b*b)-(4*a*c); 
  
  if (disc > 0) {
    root1=(-b + sqrt(disc)) / (2 * a);
    root2 = (-b - sqrt(disc)) / (2 * a);
  }
  
  printf("The roots of the quadratic equation are %lf and %lf\n",root1,root2);
}
