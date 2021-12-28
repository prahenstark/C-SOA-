//Program to display environment variable

#include<stdio.h>
#include<unistd.h>

extern char **environ;

int main(void){
	int i;
	printf("::::::ENVIRONMENT ARRAY:::::\n");
	for(i=0;environ[i]!=NULL;i++){
		printf("Environ[%d]------>%s\n",i,environ[i]);
		sleep(1);
	}
	return 0;
}
