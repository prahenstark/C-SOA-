#include<stdio.h>
#include<string.h>


int main(void) {

  char str[6]="ITER";
  char ptr[]=" IS GOOD";
  //char ptr[]="abcdefghijklmnopqrstuvwxyz";
  strcat(str,ptr);
  printf("%s\n",str);

  return 0;

} 



