#include <math.h>
#include <stdbool.h>
#include <stdio.h>

int main(void) {
  double x;
  double y;
  double hypotanuse;

  bool flag = true;

  printf("Welcome! Here we calculate your hypotanuse : \n");

  while (flag) {
    printf("Enter your Two Values : \n");

    if (scanf("%lf %lf", &x, &y) != 2) {
      printf("Please enter a valid number: \n");
      while (getchar() != '\n');
    } else {
      double hypotanuse = sqrt(x * x + y * y);
      printf("%lf", hypotanuse);
      flag = false;
    }
  }

  return 0;
}