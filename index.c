<<<<<<< HEAD
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
=======
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>


int main ()
{
    double pi = 3.14159;
    double b;
    double a;
    double hypotanuse;
    bool x = true;



    while(x){
        
     printf("gimmie two numbers\n");
     scanf("%lf",&b);
     scanf("%lf",&a);
     if(!isdigit(a) || !isdigit(b)) {
        printf("error");
        break;
     } else {
        hypotanuse = sqrt(a * b);
        x = false;
      printf("the hypotanuse is %lf",hypotanuse);

     }

    }


    
     return 0;
}
>>>>>>> 9d8258f (added while loop and error message)
