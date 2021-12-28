#include <stdio.h>

void fun(void);
int main(){
	fun();
	fun();
	fun();
	return 0;
}

void fun(void){
	static int i=1;           //default value is auto. 
	printf("i=%d\n",i);
	i=i+1;
}
