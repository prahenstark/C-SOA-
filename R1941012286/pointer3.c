#include <stdio.h> 
void sumreverse(int ,int *, int *);

int main () {

  int num;
  int sum, rev;
  printf("Enter a number : \n");
  scanf("%d", &num);
  sumreverse(num, &sum, &rev);
  printf("num=%d\n sum of digit=%d\n and reverse sum=%d\n", num,sum,rev);
  return 0;

}

void sumreverse(int num, int *s, int *r) {

  int temp;
  *s=0;
  *r=0;
  int d;
  temp=num;
  while(temp!=0) {
    d=temp%10;
    *s=*s+d;
    *r=*r*10+d;
    temp=temp/10;
  }

}
