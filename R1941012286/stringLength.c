#include <stdio.h> 
#include <unistd.h>

int stringlength(char *);

int main(void) {

  char str[]="ITER IS GOOD";
  int len;
  char ptr[]={'I','T','E','R','\0'};
  printf("string :: %s\n",str);
  for(int i=0;str[i]!='\0';i++) {
    //sleep(1);
    printf("%c\n",str[i]);
  }
  len=stringlength(str);
  printf("length is %d\n",len);
  //printf("string :: %s\n",ptr);
  return 0;

}

int stringlength(char *p) {

  int i,count=0;
  for(i=0;p[i]!='\0';i++){
    count=count+1;  
  }
  return count;

}
