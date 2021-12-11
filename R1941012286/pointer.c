#include <stdio.h>
#include <stdlib.h>

int main(void) {
  
  int a;
  int *p;
  int *q;
  p=&a;
  a=10;
  q=&a;
  printf("a = %d\n",a);
  printf("address of a is %p\n", &a);
  printf("p = %p\n",p);
  printf("dereference of a = %d\n",*(&a));
  printf("dereference of a = %d\n",*p);


  printf("value at the address of a=*(&a)=%d\n",*(&a));
  printf("value at the address of p=*p=%d\n",*p);
  printf("value at the address of a=*(p)=%d\n",*(p));  
  
  *q = *q+10;
  printf("now value of a is %d\n",a);

  return 0;

}
