#include<stdio.h>
#include<string.h>


int main(void) {

  char str[40];
  //char ptr[]="ITER IS GOOD";
  char ptr[]="abcdefghijklmnopqrstuvwxyz";
  char *p;
  p=strcpy(str,ptr);
  printf("Copied %s\n",str);
  printf("With return = %s\n",p);

  for(int i=0;str[i]!='\0';i++){
    printf("%c--------%d\n",str[i],str[i]);
  }
  return 0;

} 


