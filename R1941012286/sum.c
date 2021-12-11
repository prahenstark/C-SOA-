#include<stdio.h>

int main() {
  int r, sum=0,num;
  r=scanf("%d", &num);
  printf("the number of scanned=%d\n",num);
  while(r == -1) {   //or EOF
  
  sum=sum+num;
  r=scanf("%d", &num);
  printf("the number of scanned =%d\n",num);
  
  }
  printf("sum=%d\n",sum);
  return 0;
  }
