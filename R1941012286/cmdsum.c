#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main(int argc,char *argv[]){

  int n1,n2,n3,sum=0;

  printf("Total number of arguments = %d\n", argc);
  if(argc<2){                                                       //minimum 3 arguments required for sum operation
    printf("Usage: %s arguments separated by space\n",argv[0]);
    return 1;
  }

  printf("Argument array : \n");
  for(int i=0;argv[i]!=NULL;i++){
    printf("arg[%d]----->%s\n",i,argv[i]);
  }

  for(int i=1;argv[i]!=NULL;i++){
    sum=sum+atoi(argv[i]);
    //printf("arg[%d]----->%s\n",i,argv[i]);
  }  

  //n1=atoi(argv[1]);
  //n2=atoi(argv[2]);
  //n3=atoi(argv[3]);
  //sum=n1+n2+n3;
  printf("Sum = %d\n",sum);

  return 0;
}
