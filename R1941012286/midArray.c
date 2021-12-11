#include <stdio.h> 

void passArray(int a[],int size);

int main(){

  int size=6;
  int arr[size];
  printf("Enter 6 array elements : ");
  for(int i=0;i<size;i++){
    scanf("%d ", &arr[i]);  
  }
  passArray(arr,size);
  for(int i=0;i<size;i++){
    printf("%d ",arr[i]);  
  }
  printf("\n");
  return 0;

}

void passArray(int arr[],int size) {

  int mid=size/2;
  for(int i=0;i<mid;i++){
    int temp=arr[mid=1];
    arr[mid+1]=arr[i];
    arr[i]=temp;
    mid=mid+1;
    //a[i]=100;
  }  

}
