#include <stdio.h> 

//void passArray(int a[],int size);
void passArray(int *a,int size);

int main(){

  int arr[5];
  passArray(arr,5);
  for(int i=0;i<5;i++){
    printf("%d ",arr[i]);  
  }
  printf("\n");
  return 0;

}

void passArray(int *a,int size) {

  for(int i=0;i<size;i++){
    *(a+i)=100;
  }  

}
