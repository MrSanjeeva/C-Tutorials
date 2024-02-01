#include <stdio.h>

int main(){
  /* 1.  Write a program to calculate the area of a square */
  float side;
  printf("what is the length of the square?\n");
  scanf("%f",&side);
  float area = side * side;
  printf("Area of the square is: %f\n", area);

  /*2. Write a program to calculate area of a circle */
  float radius;
  float pi = 3.14;
  printf("Enter radius of the circle:");
  scanf("%f",&radius);
  float areaC = pi * (radius*radius);
  printf("Area of the circle is: %f\n", areaC);

  return 0;
}