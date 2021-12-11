//string comaparison

/* Test for the case
   1.A single word case
   2.Multiple word or line case
   3.New line store/ Not store case, when
   4.Length exceeding case

   char *fgets(char *s, int size, FILE *stream);
    
   fgets() returns
   1.s om success, and 
   2.NULL on error or when end of file
      ocuurs while no characters have been read
*/




#include<stdio.h>
#include<string.h>

int main(void){

  char str[30];
  char *p=NULL;
  printf("Enetr your string :: \n");
  p=fgets(str,28,stdin);
  while(p!=NULL){
    
  }


  //printf("%s\n", str);
  //printf("length = %ld\n",strlen(str));
  //for(int i=0;str[i]!='\0';i++){
  //  printf("%c----%d\n",str[i],str[i]);
  //}
  //printf("%c-----%d\n",str[i],str[i]);
  return 0;

}
