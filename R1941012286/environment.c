//Program to display environment variable

#include<stdio.h>
#include<unistd.h>

int main(int argc, char *argv[], char *argp[]){
	int i;
	printf("Enviroment array : \n");
	for(i=0;argv[i]!=NULL;i++){
		printf("Argv[%d]------>%s\n",i,argv[i]);
	}
	sleep(1);
	printf("::::::ENVIRONMENT ARRAY:::::\n");
	for(i=0;argp[i]!=NULL;i++){
		printf("Argp[%d]------>%s\n",i,argp[i]);
		sleep(1);
	}
	return 0;
}
