#include <stdio.h> 
#include <unistd.h>

void stringCopy(char s1[],char s2[]);

int main(void) {

  char s1[]="ITER IS GOOD";
  char s2[50];
  stringCopy(s1,s2);
  printf("\n");
  return 0;

}



void stringCopy(char *s1, char *s2) {

  int i;
  for(i=0;s1[i]!='\0';i++){
    *(s2+i)=*(s1+i); 
  }
  *(s2+i)='\0';
  printf("String after copying is : %s\n",s2);

}
