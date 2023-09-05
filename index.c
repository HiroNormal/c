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
    bool y;
    bool z;



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