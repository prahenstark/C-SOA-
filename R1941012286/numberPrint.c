include<stdio.h>

int main() {
  int r, whole=0,num;
  r=scanf("%d", &num);
  printf("the number of scanned=%d\n",num);
  while(r == -1) {   //or EOF
  
  whole=(whole*10)+num;
  r=scanf("%d", &num);
  printf("the number of scanned =%d\n",num);
  
  }
  printf("sum=%d\n",sum);
  return 0;
  }
