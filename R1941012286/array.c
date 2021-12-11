#include <stdio.h>

int main(void) {

  //datatype  name_of_variable[Size]
  int arr[5],i;
  for(i=0;i<5;i++){
    arr[i]=10;
  }
  printf("Array\n");
  for(i=0;i<5;i++){
    printf("%d \n",arr[i]);
  } 
  return 0;
}
