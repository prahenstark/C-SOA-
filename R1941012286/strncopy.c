#include<stdio.h>
#include<string.h>


int main(void) {

  char str[40];
  //char ptr[]="ITER IS GOOD";
  char ptr[]="abcdefghijklmnopqrstuvwxyz";
  char *p;
  p=strncpy(str,ptr,4);
  str[4]=0;
  printf("Copied %s\n",str);
  printf("Copied %s\n",p);
  
  return 0;

} 


