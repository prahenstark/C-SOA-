//String tokenization

#include <stdio.h>
#include <string.h>


int main(int argc, char *argv[]){
  
  char *t1,*t2;
  char str[]="ITER-IBCS-SUM-SOA";
  char ptr[]="CSE-MECH-ECE-EEE";

  char s[50];
  strcpy(s,str);

  printf("Before tokenization the string is = %s\n",str);

  t1=strtok(str,"-");
  t2=strtok(ptr,"-");
  
  printf("t1 = %s\n",t1);
  printf("t2 = %s\n",t2);

  printf("Original string after tokenization is = %s\n",str);

  strcpy(str,s);
  printf("After coping the string is = %s\n",str);

  t1=strtok(str+5,"-");
  printf("t1 = %s\n",t1);

  return 0;

}

