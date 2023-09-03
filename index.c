#include <stdio.h>
#include <stdbool.h> //libary that stores true or false

int main ()
{
   float pi = 3.14159; // float uses 4 bytes
   double longfloat = 3.14159; // 8 bytes more percise

   char name[] = ("Bro"); 
   char grade = 'c'; //(-128 to 127)
   unsigned char littlenum = 255; // (0 to 255)

   short int shortint = 31415; // 2 bytes (-32,768 to 32,767)
   unsigned short unshortint = 31415 ; // 2 bytes (65,535)

   bool boolean = true;

   printf("your name is %s\n",name); //  %s for String
   printf("your grade is %c\n",grade); //  %c for character
   printf("your Gpa is %.4f\n",pi); //  %F for Float
   printf("your number is %lf\n",longfloat); // %lf for fdouble
   printf("%d \n",shortint); //  %d for Integer 
   printf("%d", littlenum );
}