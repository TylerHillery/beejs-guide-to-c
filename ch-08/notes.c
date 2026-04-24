#include <stdio.h>

struct car {
  char *name;
  float price;
  int speed;
};

int main() {
  struct car saturn;
  saturn.name = "Saturn SL/2";
  saturn.price = 100.00;
  saturn.speed = 42;
  printf("Car Name: %s, Car Price: %f, Car Speed: %d\n", saturn.name,
         saturn.price, saturn.speed);
}