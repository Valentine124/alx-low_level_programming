#ifndef SERCH_ALGOS_H
#define SERCH_ALGOS_H

/* Headers */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/* Prototypes */
void print_arr(int *arr, size_t first, size_t last);
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);

#endif
