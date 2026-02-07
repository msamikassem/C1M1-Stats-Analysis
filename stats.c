/******************************************************************************
 * Copyright (C) 2026 by Mohammed Kassem
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Mohammed Kassem is not liable for any
 * misuse of this msaterial. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief Simple statistical analytics on a dataset
 *
 * This program performs statistical analytics on a provided dataset.
 * The program can analyze the array of unsigned char data items and 
 * report analytics on the maximum, minimum, mean, and median of the
 * data set. In addition, it reorders this data set from large to 
 * small, all statisics are rounded to the nearest integer and then
 * printed on the screen in a nice format
 *
 * @author Mohammed Kassem
 * @date 7/02/2026
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

}

void print_statistics(unsigned char *arrayptr,int size){

}
void print_array(unsigned char *arrayptr,int size){

}
int find_median(unsigned char *arrayptr,int size){

  return 0;
}
int find_mean(unsigned  char *arrayptr,int size){

  return 0;
}
int find_maximum(unsigned char *arrayptr,int size){

  return 0;
}
int find_minimum(unsigned char *arrayptr,int size){

  return 0;
}
void sort_array(unsigned char *arrayptr, int size){

  return 0;
}