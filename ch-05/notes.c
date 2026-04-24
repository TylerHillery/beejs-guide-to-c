#include <stdio.h>

int main(void) {
    int i = 42;
    printf("The address of i = %d, is %p which is a total of %zu bytes\n", i, &i, sizeof(int));
}