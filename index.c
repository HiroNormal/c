#include <stdio.h>
#include <math.h>

int main ()
{
    double pi = 3.14159;
    double radius;
    double circumference;

    

     printf("i will calulate the circumference of your , give me the radius of your tire\n");
     scanf("%lf",&radius);

     circumference = 2 * pi * radius;

     printf("the circumference is %lf",circumference);
     return 0;
}
