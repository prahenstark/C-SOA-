#include<stdio.h>
#include<string.h>

void passArray(int argc,char *argv[]);

int main(void){

  char *arg[5];
  
  arg[0]="ITER";   // we can also write char s[]="ITER";  then arg[0]=s;
  arg[1]="SOA";
  arg[2]="IBCS";
  arg[3]="IDS";
  arg[4]=NULL;

  passArray(5,arg);
 
  return 0;
}


void passArray(int argc,char *argv[]){      //**arg == *arg[]
  for(int i=0; argv[i]!=NULL; i++){         //i<argc  
    printf("arg[%d]---->%s-----%p\n",i,argv[i],argv[i]);
    //printf("arg[%d]---->%s-----%p\n",i,*(arg+i),arg+i);
  }
}          

