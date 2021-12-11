#include <stdio.h> 

int main(void) {

  char str[]="ITER IS GOOD";
  char ptr[]={'I','T','E','R','\0'};
  printf("string :: %s\n",str);
  for(int i=0;str[i]!='\0';i++) {
    printf("%c\n",str[i]);
  }
  //printf("string :: %s\n",ptr);
  return 0;

}
