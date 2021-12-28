//Development of argument array
// Version 3 (Final Version)

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "myarg.h"

int makeargv(const char *s,const char *delim,char ***argvp);
int main(int argc,char *argv[]){

	//char str[]="This is a Test String";
	int i,ntokens=0;
	char delim[]=" \t";
	char **myargv;//my argument array
	ntokens=makeargv(argv[1],delim,&myargv);
	if(ntokens==-1){
		printf("Failed to create argument array\n");
		return -1;
	}
	// Printing argument array
	printf("Inside main function::::\n");
	for(i=0;myargv[i]!=NULL;i++)
		printf("myargv[%d]------>%s\n",i,myargv[i]);
	return 0;
	
}
