#include <stdio.h>
#include <unistd.h>

int main() {

  int pid1;
  pid1=fork();
  if(pid1==0) {

    printf("I am child.\n");   
    int pid2=fork();

    if(pid2==0) {

      printf("I am the second child.\n");
      int pid3=fork();

      if(pid3==0) {

	printf("I am the third child.\n");
	int pid4=fork();

    	if(pid4==0) {

	  printf("I am the forth child.\n");
        }
      }
    }
  }
  else {
    printf("I am parent.\n");
  }
  //while (1)
  return 0;

}
