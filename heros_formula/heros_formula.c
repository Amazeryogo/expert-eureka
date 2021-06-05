#include<stdio.h>
#include"heros_formula.h"

// the formula is sqrt(s(s-a)(s-b)(s-c)) where s = a+b+c/2
int main (int argc, char *argv[])
{
  double a, b, c, p;
  printf ("a>>");
  scanf ("%lf", &a);
  printf ("b>>");
  scanf ("%lf", &b);
  printf ("c>>");
  scanf ("%lf", &c);
  p = hero(a,b,c);
  printf ("%.2lf\n", p);
  return 0;
}
