#include <stdio.h>

int main(void) {

  int num=120;
  int *p;
  p=&num;
  int **q;
  q=&p;

  printf("num = %d\n",num);
  printf("value of num using q = %d\n",**q);    // display the value of num in terms of q
  printf("value of num using p = %d\n",*p);    //display the value of num using p
  return 0;

}
