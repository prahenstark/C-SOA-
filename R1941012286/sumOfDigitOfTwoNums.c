#include <stdio.h>

int digitSum(int n); //Functio prototype

int main() {
  
  int num1, num2, r;
  printf("Enter a number : ");
  scanf("%d", &num1);
  printf("Enter another number : ");
  scanf("%d", &num2);
  r=digitSum(num1);
  r=r+digitSum(num2);
  printf("Sum of the digit of %d and %d is %d\n", num1, num2, r);
  return 0;
  
}

int digitSum(int n) {

  int d, sum=0;
  while(n!=0) {
    d=n%10;
    sum=sum+d;
    n=n/10;
  }
  printf("n inside function = %d\n", n);
  return(sum);

}
