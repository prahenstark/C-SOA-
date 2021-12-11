#include <stdio.h> 

//void passArray(int a[],int size);
//void pointerArrayAdd(int a[],int b[],int r[],int size);
void pointerArrayAdd(int *,int *,int *,int);

int main(){

  int size=5;
  int r[size];
  int a[]={10,20,30,40,50};
  int b[]={1,2,3,4,5};
  pointerArrayAdd(a,b,r,size);
  for(int i=0;i<5;i++){
    printf("%d ",r[i]);  
  }
  printf("\n");
  return 0;

}

void pointerArrayAdd(const int *a,const int *b,int *r,int size) {              //to make an array only readable add "const"

  int sum;
  for(int i=0;i<size;i++){
    sum=&(a+i)+&(b+i);
    r[i]=sum;
  }  

}
