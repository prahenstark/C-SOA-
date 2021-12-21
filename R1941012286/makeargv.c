//Developement of argument array
//v0.1

#include<stdio.h>
#include<string.h>

char **makeargv(char *s);
int main(int argc, char *argv[]){

  char str[]="This is a test String";
  int i;
  char **myargv;   //my argument array
  myargv=makeargv(str);
  //printing arg array
  for(int i=0;myargv[i]!=NULL;i++){
    printf("myargv[%d]----->%s\n",i,myargv[i]);
  }
  return 0;

}

char **makeargv(char *s){

  int ntokens=0,i;
  char t[40];
  strcpy(t,s);    //string copy
  if(strtok(t," ")!=NULL)
    for(ntokens=1;strtok(NULL," ")!=NULL;ntokens++);
   ntokens=ntokens+1;
   static char *argpv[6];         //give a staic value i.e 6 in place of ntokens
   strcpy(t,s);    //again copy
   argpv[0]=strtok(t," ");
   for(i=1;i<ntokens-1;i++)
      argpv[i]=strtok(NULL," ");
   argpv[i]=NULL;
   //printing
   printf("inside the nakeargv function :: \n");
   for(i=0;argpv[i]!=NULL;i++){
     printf("argvp[%d]------->%s\n",i,argpv[i]);
   } 
   return argpv;

}
