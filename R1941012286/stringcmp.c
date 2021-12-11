//string comaparison

#include<stdio.h>
#include<string.h>

int main(void){

  char s1[]="ITER";
  char s2[]="ITEX";
  int x=strcmp(s1,s2);
  if(x==0){
    printf("Both strings are equal.\n");
  } else{
    printf("Diff=%d and Both strings are not equal.\n",x);
  }
  return 0;

}
