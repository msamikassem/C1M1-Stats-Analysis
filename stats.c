/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
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
#include <math.h>
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
  printf("\nOriginal Array:\n");
  print_array(test,SIZE);
  printf("\nStatistics:\n");
  print_statistics(test,SIZE);
  sort_array(test,SIZE);
  printf("\nArray After Sorting:\n");
  print_array(test,SIZE);

}

void print_statistics(unsigned char *arrayptr,int size){

  
  printf("Median   = %d\n",find_median(arrayptr,size));
  printf("Mean     = %d\n",find_mean(arrayptr,size));
  printf("Maximum  = %d\n",find_maximum(arrayptr,size));
  printf("Minimum  = %d\n",find_minimum(arrayptr,size));

}
void print_array(unsigned char *arrayptr,int size){


  for (int i=0; i<size;i++){
    printf("%u ",*(arrayptr+i)); //loops through all values
  

  }

}
int find_median(unsigned char *arrayptr,int size){

  int median;
  sort_array(arrayptr,size);
  if (size%2 == 0){
    float sum  = *(arrayptr+((size-1)/2)) + *(arrayptr+((size-1)/2)+1); //Two middle values divided by 2
    median = sum/2;

  }
  else{
    median = *(arrayptr+((size-1)/2)+1);
  }


  return median;
}

int find_mean(unsigned  char *arrayptr,int size){

  int sum = 0;
  for (int i=0;i<size;i++){
    sum += *(arrayptr+i);
  }
  float mean = sum/size;

  return mean;
}
int find_maximum(unsigned char *arrayptr,int size){

  int greatest = 0;
  for (int i=0;i<size;i++){
    if (greatest < *(arrayptr+i)){
      greatest = *(arrayptr+i); //stores the biggest value and compares it with the next element 
    }
  }
  return greatest;
}
int find_minimum(unsigned char *arrayptr,int size){

  int smallest = *arrayptr;
  for (int i=1;i<size;i++){
    if (smallest > *(arrayptr+i)){
      smallest = *(arrayptr+i); //stores the smalest value and compares it with the next element 
    }
  }

  return smallest;
}
void sort_array(unsigned char *arrayptr, int size){ //Bubble sort (Descending order)


  for(int i=0;i<size;i++){
    for(int j=0;j<size-i-1;j++){    
      if(*(arrayptr+j) < *(arrayptr+j+1)){
        char temp= *(arrayptr+j);
        *(arrayptr+j)= *(arrayptr+j+1);
        *(arrayptr+j+1)=temp;
      }
    }
  }

}