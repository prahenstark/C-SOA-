//String tokenization

#include <stdio.h>
#include <string.h>


int main(int argc, char *argv[]){
  
  char *t1;
  char str[]="ITER-;IBCS;SUM-SOA";

  t1=strtok(str,"-;");

  while(t1!=NULL){
    printf("t1 = %s\n",t1);
    //subsequent call to strtok to tokenization the same string
    t1=strtok(NULL,"-;");
  }

  for(int i=0;i<18;i++){
    printf("%d------>%c\n",str[i],str[i]);
  }

  return 0;

}

