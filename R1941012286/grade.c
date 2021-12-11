#include <stdio.h>

int main() {

  int mark;
  printf("Enter number of the student : ");
  scanf("%d", &mark);

  if(mark<0 || mark>100) {

    printf("Invalid mark. Try again.\n");
    return 0;
    //printf("holla");

  } else {

    if(mark>=90) {
	printf("Your grade is O \n");
    }
    else if(mark>=80 && mark<90) {
	printf("Your grade is E \n");
    }
    else if(mark>=70 && mark<80) {
	printf("Your grade is A \n");
    }
    else if(mark>=60 && mark<70) {
	printf("Your grade is B \n");
    } 
    else {
        printf("Your failed. \n");
        return 0;
    }
  }

}
