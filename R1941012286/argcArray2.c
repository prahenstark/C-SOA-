// Development of argument array
// Version 0.0
#include<stdio.h>
#include<string.h>
int main(int argc,char *argv[])
{
	char str[]="This is a Test String_sure May or may_not";
	int i=0,ntoken=0;
	char *token;
	// Save the string
	char temp[40];
	strcpy(temp,str);
	// Count no of tokens
	if(strtok(str," ")!=NULL)
		for(ntoken=1;strtok(NULL," ")!=NULL;ntoken++);
	printf("Num of toekn %d\n",ntoken);
	ntoken=ntoken+1;
	char *argp[ntoken];
	strcpy(str,temp); // Copy the string
	// Start tokenization and put into the array
	token=strtok(str," ");
	while(token!=NULL){
		argp[i]=token;
		token=strtok(NULL," ");
		i=i+1;
	}
	argp[ntoken-1]=NULL;
	// Printing argument array
	for(i=0;argp[i]!=NULL;i++)
		printf("argp[%d]------->%s\n",i,argp[i]);
	return 0;
}
