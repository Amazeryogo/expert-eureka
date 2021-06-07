#include<math.h>
double hero(double a, double b, double c){
    double s = (a+b+c)/2;
    double p,l,q;
    p = (s-a);
    l = (s-b);
    q = (s-c);
    return sqrt(s * l * p * q);	    
}
