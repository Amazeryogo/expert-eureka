#include<math.h>
double hero(double a, double b, double c){
    double s = a+b+c/2;
    return sqrt(s * (s - a) * (s - b) * (s - c));	    
}
