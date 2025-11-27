#include <stdio.h>


int main()
{
   double radius;
   double Surface_Area;
const double PI=3.142857143;

   printf("enter radius of sphere");
   scanf("%lf" , radius);

   Surface_Area=4*PI*radius*radius;

   scanf("Surface area of sphere:%.4lf\n", Surface_Area);

    return 0;
}
