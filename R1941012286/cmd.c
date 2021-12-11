#include<stdio.h>
#include<string.h>


int main(int argc,char *argv[]){

  printf("Size of the array = %d\n", argc);
  for(int i=0;argv[i]!=NULL;i++){
    printf("arg[%d]----->%s\n",i,argv[i]);
  }
  return 0;
}
