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
  printf("this is the string of another: %s\n", another);
  printf("sizeof ::  int: %lu, float: %lu, double: %lu, char: %lu\n", sizeof(int), sizeof(float), sizeof(double), sizeof(char));
  printf("int: %d, float: %0f\n", distance, power);

  printf("You are %d miles away.\n", distance);
  printf("You have %f levels of power.\n", power);
  printf("You have %f awesome super powers.\n", super_power);
  printf("I have an initial %c.\n", initial);
  printf("I have a first name %s.\n", first_name);
  printf("I have a last name %s.\n", last_name);
  printf("My whole name is %s %c. %s.\n", first_name, initial, last_name);

  return 0;
}
