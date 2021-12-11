#include <stdio.h> 
#include <unistd.h>

int stringlength(char *);
int stringReverse(char s[],int len);

int main(void) {

  char str[]="ITER IS GOOD";
  int len;
  //printf("string :: %s\n",str);
  for(int i=0;str[i]!='\0';i++) {
    //sleep(1);
    printf("%c",str[i]);
  }
  printf("\n");
  len=stringlength(str);
  stringReverse(str,len);
  printf("The string after reverse is : ")
  for(int i=0;str[i]!='\0';i++) {
    //sleep(1);
    printf("%c",str[i]);
  }
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


int stringReverse(char s[], int len) {

  int i,count=0;
  for(i=0;i<=(len/2)+1;i++){
    int temp=s[i];
    s[i]=s[len-1];
    s[len-1]=temp;
    len-=1; 
  }
  return count;

}
