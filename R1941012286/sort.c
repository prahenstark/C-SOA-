#include <stdio.h> 

void order(int *, int*);

int main() {

  int n1,n2,n3,n4;
  printf("Enter 4 numbers : ");
  scanf("%d%d%d%d", &n1,&n2,&n3,&n4);
  order(&n1,&n2);
  order(&n1,&n3);
  order(&n1,&n4);
  order(&n2,&n3);
  order(&n2,&n4);
  order(&n3,&n4);
  printf("sorted list : ");
  printf("%d %d %d %d \n",n1,n2,n3,n4);
  return 0 ;

}

void order(int *x,int *y) {

  int temp;
  if(*x>*y){
    temp=*x;
    *x=*y;
    *y=temp;    
 }

}
