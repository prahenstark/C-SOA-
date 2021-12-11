#include <stdio.h>
#include <unistd.h>
#include <string.h>

int stringlength(char *);

int main() {
  char str[]="ITER IS GOOD";
  size_t len;
  char dest[50];
  char *rptr;
  printf("string : %s\n",str);
  len=strlen(str);
  printf("length = %ld\n",len);
  rptr=strcpy(dest,str);
  printf("copied = %s\n",dest);
  printf("copied = %s\n",rptr);
  return 0;
}
