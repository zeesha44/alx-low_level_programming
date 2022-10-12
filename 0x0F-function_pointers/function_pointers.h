#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>

void print_name(char *, void (*)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
#endif
