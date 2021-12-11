#include <stdio.h>

void swapMid(int *t);

int main(void)
{

  char *s="iter";
  swapMid(&s[2]);
  printf("after swap = %s\n",s);
  return 0;

}

void swapMid(int *t) {
  int temp;
  temp=*t;
  *t=*(t+1);
  *(t+1)=*t;
  //return temp;
}
