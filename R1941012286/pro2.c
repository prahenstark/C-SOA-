#include<stdio.h>
#include<unistd.h>

int main(){
	pid_t pid;
	pid=fork();
	printf("Main process pid = %ld\n",(long)getpid());
	if(pid==0){
		printf("I am child . My pid = %ld\n",(long)getpid());
		printf("child return value of fork = %ld\n",(long)pid);
	}else{
		printf("I am parent . My pid = %ld\n",(long)getpid());
		printf("parent return value of fork = %ld\n",(long)pid);
	}

	return 0;
}
