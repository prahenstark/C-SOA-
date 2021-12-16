//String tokenization

#include <stdio.h>
#include <string.h>


int main(int argc, char *argv[]){
  
  char str[]="ITER-IBCS-SUM-SOA-IDS";
  char *delim="-";
  int ntoken=0;

  if(strtok(str,delim)!=NULL)
    for(ntoken=1;strtok(NULL,delim)!=NULL;ntoken++);
  printf("Numbers of token = %d\n",ntoken);

  return 0;

}

