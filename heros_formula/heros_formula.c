#include<stdio.h>
#include<math.h>

// the formula is sqrt(s(s-a)(s-b)(s-c)) where s = a+b+c/2
int main (int argc, char *argv[])
{
  double a, b, c;
  printf ("a>>");
  scanf ("%lf", &a);
  printf ("b>>");
  scanf ("%lf", &b);
  printf ("c>>");
  scanf ("%lf", &c);
  double s = (a + b + c) / 2;
  double p = s * (s - a) * (s - b) * (s - c);
  double q = sqrt (p);
  printf ("%.2lf\n", q);
  return 0;
}
