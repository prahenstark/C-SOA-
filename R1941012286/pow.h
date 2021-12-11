int power(int p,int q) {

  int i=1, mul=1;
  while(i<=q) {
    mul=mul*p;
    i=i+1;
  }
  return mul;

}
