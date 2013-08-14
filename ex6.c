#include <stdio.h>

int main(int argc, char *argv[])
{
  int    distance     = 2.3;
  float  power        = 2.3;
  double super_power  = 56789.4532;
  char   initial      = 'W';
  char   first_name[] = "Jason";
  char   last_name[]  = "Barnett";
  char   *another     = "Bob";

  printf("this is the first byte: %c\n", first_name[0]);
  printf("this is the first byte another: %s\n", another);
  printf("int: %d, float: %d, double: %d, char: %d\n", sizeof(int), sizeof(float), sizeof(double), sizeof(char));
  printf("int: %d, float: %f\n", distance, power);

  printf("You have %f levels of power.\n", power);
  printf("You have %f awesome super powers.\n", super_power);
  printf("My whole name is %s %c. %s.\n", first_name, initial, last_name);
}
