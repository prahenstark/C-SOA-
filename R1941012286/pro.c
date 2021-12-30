#include<stdio.h>
#include<unistd.h>

int main(){
	int a,i=0;
	printf("PID = %ld\n",(long)getpid());
	printf("PPID = %ld\n",(long)getppid());
	while(1);
	
	
	//while(1){
	//	printf("i=%d\n",i);
	//	i=i+1;
		//sleep(1);
	//}
	//scanf("%d",&a);
	
	return 0;
}
