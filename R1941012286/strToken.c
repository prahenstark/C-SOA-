//String tokenization

#include <stdio.h>
#include <string.h>


int main(int argc, char *argv[]){
  
  char str[]="ITER-IBCS-SUM-SOA";
  char *t1,*t2,*t3,*t4,*t5;
  t1=strtok(str,"-");
  t2=strtok(NULL,"-");
  t3=strtok(NULL,"-");
  t4=strtok(NULL,"-");
  t5=strtok(NULL,"-");

  printf("1st token : %s\n",t1);
  printf("2nd token : %s\n",t2);
  printf("3rd token : %s\n",t3);
  printf("4th token : %s\n",t4);  
  printf("5th token : %s\n",t5);

  return 0;

}

