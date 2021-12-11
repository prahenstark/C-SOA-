#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {

  printf("Before\n");
  fork();
  printf("Before\n");
  fork();
  printf("Before\n");
  fork();
  printf("Before\n");
  sleep(2);
  
  //printf("I am confused in output\n");
  //printf("I am confused in output\n");
  return 0;

}
