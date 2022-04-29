#include <stdio.h>
//area of circle

void diaM (int radN);
#define Pi 3.14159

int main()
{
   int radius;

   printf("Radius of the circle: ");
   scanf(" %d", &radius);

   //printing the diameter, circum & area
   diaM(radius);
}

void diaM (int radN)
{ 
   double area, res = radN * 2;
   //diameter
   printf( "The diameter is %.f\n", res);

   //circumference
   res *= Pi;
   printf( "The circumference is %f\n", res);
   
   //area
   area = Pi * radN * radN;
   printf("The area of the circle is %f\n", area);
}