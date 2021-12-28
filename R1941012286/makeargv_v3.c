//Development of argument array
// Version 3 (Final Version)
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
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
int makeargv(const char *s,const char *delim,char ***argvp){
		char *t;
		int ntokens,i;
		const char *snew;
		snew=s+strspn(s,delim);// snew is the real beginning of the string
		t=(char*)malloc((strlen(snew)+1)*sizeof(char));
		if(t==NULL){
			printf("No more available in memory\n");
			return -1;
		}
		strcpy(t,snew);
		//printf("Copied string = %s\n",t);
		// Counting number of tokens
		if(strtok(t,delim)!=NULL){
			for(ntokens=1;strtok(NULL,delim)!=NULL;ntokens++);
		}
		*argvp=(char **)malloc((ntokens+1)*sizeof(char *));
		if(*argvp==NULL){		
			printf("No more available in memory\n");
			return -1;
		}
		strcpy(t,snew); // Again copy
		*(*argvp+0)=strtok(t,delim); // first token		
		for(i=1;i<ntokens;i++){
			*(*argvp+i)=strtok(NULL,delim); // Rest of the tokens
		}
		*(*argvp+ntokens)=NULL;
		return ntokens; // Return the number of tokens
}
