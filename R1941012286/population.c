#include <stdio.h> 

float population(int n);

int main() {

  int year;
  float pop;
  printf("Enter a year after 1990 : ");
  scanf("%d", &year);
  pop=population(year);
  printf("Predicted Gotham City 🦇️ population for year %d  is %f (in thousands) \n",year, pop);
  return 0;

}

float population(int year) {

  int d = year-1990;
  float res = 52.966+2.184*(d);
  
  return res;

}
