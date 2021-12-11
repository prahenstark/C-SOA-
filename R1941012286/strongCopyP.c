#include <stdio.h> 
#include <unistd.h>

void stringCopy(char *s1,char *s2);
int stringReverse(char s[],int len);

int main(void) {

  char s1[]="ITER IS GOOD";
  char s2[14];
  stringCopy(s1,s2);
  printf("String after copying is : %s\n",s2); 
  printf("end");
  return 0;

}



void stringCopy(char *s1, char *s2) {

  for(;*(s1)!='\0';s1++){            
    *(s2)=*(s1); 
     s2++;
  }
  *(s2)='\0';
  

}





