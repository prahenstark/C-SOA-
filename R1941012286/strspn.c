#include<string.h>
#include<stdio.h>

int main(){

  char str[]="=;=;ITER IS GOOD";
  size_t len;
  len=strspn(str,"=;");
  printf("Prefix length = %ld\n",len);
  printf("The real begin of the string = %s\n", str+len);
  return 0;

}
