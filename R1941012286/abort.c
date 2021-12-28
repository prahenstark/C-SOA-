#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(int argc, char *argv[], char *argp[]){
	int x=1,i;
	while(i<=5){
		printf("ITER\n");
		sleep(1);
		//if(x==10)
		//	abort();
		//x+=1;
		i=i+1;
	}
	printf("Terminated !\n");
	return 0;
}
