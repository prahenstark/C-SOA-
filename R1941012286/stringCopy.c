#include <stdio.h> 
#include <unistd.h>

int stringlength(char *);
void stringCopy(char s1[],char s2[]);

int main(void) {

  char s1[]="ITER IS GOOD";
  int len;
  len=stringlength(s1);
  char s2[len];
  stringCopy(s1,s2);
  printf("\n");
  return 0;

}

int stringlength(char *p) {

  int i,count=0;
  for(i=0;p[i]!='\0';i++){
    count=count+1;  
  }
  return count;

}


void stringCopy(char s1[], char s2[]) {

  int i;
  for(i=0;s1[i]!='\0';i++){
    s2[i]=s1[i]; 
  }
  s2[i]='\0';
  printf("String after copying is : %s\n",s2);

}
