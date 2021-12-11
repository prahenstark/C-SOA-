#include <stdio.h> 
void separate(double ,char *, int *, double *);

int main () {

  double num;
  char sign;
  int whole;
  double frac; 
  printf("Enter a number : \n");
  scanf("%lf", &num);
  separate(num, &sign, &whole, &frac);
  printf("num=%lf\n sign=%c\n whole=%d\n fraction=%lf\n", num,sign,whole,frac);
  return 0;

}

void separate(double num,char *s, int *w, double *f) {

  if(num>0) {*s='+';}
  else if(num==0){*s=' ';}
  else {*s='-';}

  *w=(int)num;
  *f=num-*w;

}
