#include <stdio.h>
#include <math.h>

double Rosenbrock2d(double x, double y){
    return 100*pow(x*x-y,2) + pow(x-1,2);
}

int main5(){

   printf("%lf, ", Rosenbrock2d(1,1)); //0
   printf("%lf, ", Rosenbrock2d(1,0)); //100
   printf("%lf\n", Rosenbrock2d(2,4)); //1
   return 0;
}
