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
  sleep(10);
  
  return 0;

}
