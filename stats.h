/******************************************************************************
 * Copyright (C) 2026 by Mohammed Kassem
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Mohammed Kassem is not liable for any
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

#ifndef STATS_H
#define STATS_H

/**
 * @brief prints calculated statistical values
 *
 * When called, it prints the returned results
 * from find_median, find_mean, find maximum 
 * and find_minimum functions. Calculated from
 * the passed down array
 *
 * @param arrayptr pointer to first array element
 * @param size array size
 */
 void print_statistics(unsigned char *arrayptr,int size);

/**
 * @brief Prints an Array
 *
 * This function takes as an input an array ptr and size,
 * loops through the array and prints each value until it
 * covers the size of the array
 * 
 * @param arrayptr pointer to first array element
 * @param size array size
 */
 void print_array(unsigned char *arrayptr,int size);

/**
 * @brief calculates the medain of an array
 * 
 * This function takes as an input an array ptr and size,
 * it then loops through the array and stores each value
 * in a temporary array. The temporary array is sorted 
 * from small to big. If the array size is odd, the 
 * middle value is returned otherwise the average of the
 * two middle values is returned 
 * 
 * @param arrayptr pointer to first array element
 * @param size array size
 * @return The median of the array 
 */
 int find_median(unsigned char *arrayptr,int size);

/**
 * @brief calculates the mean of an array
 * 
 * This function takes as an input an array ptr and size,
 * it then loops through the array and adds all the value
 * together. The summed values are then divided by the
 * size of the array and returned
 * 
 * @param arrayptr pointer to first array element
 * @param size array size
 * @return The mean of the array
 */
 int find_mean(unsigned char *arrayptr,int size);

/**
 * @brief Finds the maximum value of an array
 * 
 * This function takes as an input an array ptr and size,
 * it then loops through the array comparing the first
 * value with the second and then storing the biggest
 * in a temporaryly, the stored value is then compared 
 * with the next value, the biggest is stored and so on
 * 
 * @param arrayptr pointer to first array element
 * @param size array size
 * @return The maximum value of the array
 */
 int find_maximum(unsigned char *arrayptr,int size);

 /**
 * @brief Finds the minimum value of an array
 * 
 * This function takes as an input an array ptr and size,
 * it then loops through the array comparing the first
 * value with the second and then storing the smallest
 * in a temporaryly, the stored value is then compared 
 * with the next value, the biggest is stored and so on
 * 
 * @param arrayptr pointer to first array element
 * @param size array size
 * @return The minimum value of the array
 */
 int find_minimum(unsigned char *arrayptr,int size);

 
/**
 * @brief Sorts an array from large to small
 * 
 * This function takes as an input an array ptr and size.
 * It uses bubble sort algorith, where two for loops run
 * through the array, taking each element and comparing it
 * with the rest of the elements. shifting it to its right
 * location in the array 
 * @param arrayptr pointer to first array element
 * @param size array size
 */
 void sort_array(unsigned char *arrayptr, int size);




#endif /* STATS_H */
