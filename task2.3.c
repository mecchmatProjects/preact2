#include <stdio.h>
#include <math.h>
//Heron formula of triangle area
double area(double x, double y, double z){
   double p = (x+y+z)/2;
   return sqrt(p*(p-x)*(p-y)*(p-z));
}

void main2(){

  double a,b,c;
  printf("a,b,c:\n");
  scanf("%lf %lf %lf",&a,&b,&c);

  double s = area(a,b,c);
  printf("area of triangle is %lf",s);

}
