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
 * @brief Analytics Report
 *
 * Available functions analyze an array of unsigned char data items and report analytics on the maximum, minimum, mean, and median of the data set. 
 * Repository contains stats.c, stats.h and the README.md files
 *
 * @author Prince Nkansah
 * @date June 20, 2023
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

/*
  *  A function that prints the statistics of an array including minimum, maximum, mean, and median.
  * @params:
  *  int * ptr: Pointer to a data set
  *  int count: Number of items in data set
  * @return: Average of the numbers provided.
*/
void print_statistics(unsigned char *ptr, unsigned int count);

/*
  *  Given an array of data and a length, prints the array to the screen
  * @params:
  *  int * ptr: Pointer to a data set
  *  int count: Number of items in data set
  * @return: Average of the numbers provided.
*/
void print_array(unsigned char *ptr, unsigned int count);

/*
  *  Given an array of data and a length, returns the median value
  * @params:
  *  int * ptr: Pointer to a data set
  *  int count: Number of items in data set
  * @return: Average of the numbers provided.
*/
void find_median(unsigned char *ptr, unsigned int count);

/*
  *  Given an array of data and a length, returns the mean
  * @params:
  *  int * ptr: Pointer to a data set
  *  int count: Number of items in data set
  * @return: Average of the numbers provided.
*/
unsigned char find_mean(unsigned char *ptr, unsigned int count);

/*
  *  Given an array of data and a length, returns the maximum
  * @params:
  *  int * ptr: Pointer to a data set
  *  int count: Number of items in data set
  * @return: Average of the numbers provided.
*/
void find_maximum(unsigned char *ptr, unsigned int count);

/*
  *  Given an array of data and a length, returns the minimum
  * @params:
  *  int * ptr: Pointer to a data set
  *  int count: Number of items in data set
  * @return: Average of the numbers provided.
*/
void find_minimum(unsigned char *ptr, unsigned int count);

/*
  *   Given an array of data and a length, sorts the array from largest to smallest
  * @params:
  *  int * ptr: Pointer to a data set
  *  int count: Number of items in data set
  * @return: Average of the numbers provided.
*/
void sort_array(unsigned char *ptr, unsigned int count);
/* Statistics and Printing Functions Go Here */

int main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};


  return 0;

}

unsigned char find_mean(unsigned char *ptr, unsigned int count){
  
}
unsigned char find_mean(unsigned char *ptr, unsigned int count){
  
}
unsigned char find_mean(unsigned char *ptr, unsigned int count){
  
}
unsigned char find_mean(unsigned char *ptr, unsigned int count){

}
unsigned char find_mean(unsigned char *ptr, unsigned int count){
  
}
unsigned char find_mean(unsigned char *ptr, unsigned int count){
  
}
unsigned char find_mean(unsigned char *ptr, unsigned int count){
  
}