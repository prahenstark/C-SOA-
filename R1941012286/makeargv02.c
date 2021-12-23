#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char **makeargv(char *s);
int main(int argc,char *argv[])
{
	char str[]="This is a test string";
	int i;
	char **myargv; //my argument array 
	myargv=makeargv(str);
	//printing argument array 
	for(int i=0;myargv[i]!=NULL;i++){
		printf("myargv[%d]---->%s\n",i,myargv[i]);
	}																																																											
	return 0;
	
}	
char **makeargv(char *s)
{
	char *t;
	char **argvp;
	int ntokens,i;
	t=(char*)malloc((strlen(s)+1)*sizeof(char));
	if(t==NULL){
		printf("No more available of memory for t.\n");
		return NULL;
	}
	strcpy(t,s);
	printf("Copied string = %s\n",t);
	ntokens=0;
	if(strtok(t," ")!=NULL){
		//counting no. of tokens
		for(ntokens=1;strtok(NULL," ")!=NULL;ntokens++);
	}
	argvp=(char**)malloc((ntokens+1)*sizeof(char*));
	if(argvp==NULL){
		printf("No more available of memory for argvp.\n");
		return NULL;
	}
	strcpy(t,s);                 //again copy
	*(argvp+0)=strtok(t," ");    //first token
	for(i=1;i<ntokens;i++){
		*(argvp+1)=strtok(NULL," ");
	}
	*(argvp+ntokens)=NULL;
	return NULL;
}









