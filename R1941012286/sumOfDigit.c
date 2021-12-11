#include <stdio.h>

int digitSum(int n); //Functio prototype

int main() {
  
  int num,r;
  printf("Enter a number : ");
  scanf("%d", &num);
  r=digitSum(num);
  printf("Sum of the digit of %d is %d\n", num, r);
  return 0;
  
}

int digitSum(int n) {

  int d, sum=0;
  while(n!=0) {
    d=n%10;
    sum=sum+d;
    n=n/10;
  }
  return(sum);

}
