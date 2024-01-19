#include <stdio.h>

#define SIZE 1000

void display() {
    for (size_t i = 0; i < SIZE; i++) {
        for (size_t j = 0; j < SIZE; j++) {
            printf("%zu%zu ", i, j);
        }
        printf("\n");
    }
}