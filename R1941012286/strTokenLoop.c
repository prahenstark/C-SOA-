//String tokenization

#include <stdio.h>
#include <string.h>


int main(int argc, char *argv[]){
  
  char str[]="ITER=====IBCS;SUM:::::SOA";
  char *t1;

  t1=strtok(str,"=;:");
  
  while(t1!=NULL){
    printf("token = %s\n",t1);
    t1=strtok(NULL,"=;:");
  }

  return 0;

}

