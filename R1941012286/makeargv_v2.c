//version 2

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int makeargv(char *s, char ***argvp);
int main(int argc,char *argv[])
{
	//char str[]="This is a test string";
	int i,ntokens=0;
	char **myargv; //my argument array
	ntokens=makeargv(argv[1]," "&myargv);      
	//myargv=makeargv(argv[1]); 
	//myargv=makeargv(str);
	if(ntoken==-1){
		printf("Failed to create argument array.\n");
		return -1;
	}
	//printing argument array 
	printf("\ninside the main function ::: \n");
	for(int i=0;myargv[i]!=NULL;i++){
		printf("myargv[%d]---->%s\n",i,myargv[i]);
	}																																																											
	return 0;
	
}	
char makeargv(char *s, char ***argvp)
{
	char *t;
	//char ***argvp;
	int ntokens,i;
	t=(char*)malloc((strlen(s)+1)*sizeof(char));
	if(t==NULL){
		printf("No more available of memory for t.\n");
		return -1;
	}
	strcpy(t,s);
	//printf("Copied string = %s\n",t);
	//ntokens=0;
	if(strtok(t," ")!=NULL){
		//counting no. of tokens
		for(ntokens=1;strtok(NULL," ")!=NULL;ntokens++);
	}
	*argvp=(char **)malloc((ntokens+1)*sizeof(char *));
	if(*argvp==NULL){
		printf("No more available of memory for argvp.\n");
		return -1;
	}
	strcpy(t,s);                 //again copy
	*(*argvp+0)=strtok(t," ");    //first token
	for(i=1;i<ntokens;i++){
		*(*argvp+i)=strtok(NULL," ");
	}
	*(*argvp+ntokens)=NULL;
	return ntokens;  //return the number of tokens
}









