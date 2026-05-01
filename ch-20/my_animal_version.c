#include <stdio.h>

enum animal_types { ANTELOPE, OCTOPUS };

struct antelope {
  int loudness;
};
struct octopus {
  int sea_creature;
  float intelligence;
};

union animal_data {
  struct antelope antelope;
  struct octopus octopus;
};

struct animal {
  enum animal_types type;
  union animal_data data;
};

void print_animal(struct animal *animal) {
    switch (animal->type) {
        case ANTELOPE:
            printf("Antelope: loudness=%d\n", animal->data.antelope.loudness);
            break;
        case OCTOPUS:
            printf("Octopus: sea_creature=%d\n", animal->data.octopus.sea_creature);
            printf("Octopus: intelligence=%f\n", animal->data.octopus.intelligence);
            break;
        default:
            printf("Unknown animal type\n");
    }
}

int main(void) {
    struct animal antelope = {.type=ANTELOPE, .data.antelope.loudness=10};
    struct animal octopus = {.type=OCTOPUS, .data.octopus.sea_creature=1, .data.octopus.intelligence=12.45};

    print_animal(&antelope);
    print_animal(&octopus);
}