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
 * @file stats.h 
 * @brief statistics functions for analyzing arrays of char data items
 *
 * Reports min, max, mean, and median of array of char data items.
 *
 * @author John Hageman
 * @date July 17, 2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__ 

/**
 * @brief Prints the statistics of an array
 *
 * This function prints minimum, maximum, mean, and median
 * of the array of data being analyzed.
 */
void print_statistics();


/**
 * @brief Prints the array to the screen
 *
 * Given an array of data and a length,
 * this function prints the array to the screen
 *
 * @param array Array of numbers to get printed
 * @param n The number of elements in array
 */
void print_array(unsigned char * array[], unsigned int n);


/**
 * @brief Returns the median value of an array
 *
 * Given an array of data and a length, returns the median value
 *
 * @param array Array of numbers to analyze
 * @param n The number of elements in array
 *
 * @return The median of the array
 */
unsigned char find_median(unsigned char * array[], unsigned int n);


/**
 * @brief Returns the mean value of an array
 *
 * Given an array of data and a length, returns the mean value
 *
 * @param array Array of numbers to analyze
 * @param n The number of elements in array
 *
 * @return The mean of the array
 */
unsigned char find_mean(unsigned char * array[], unsigned int n);


/**
 * @brief Returns the maximum value of an array
 *
 * Given an array of data and a length, returns the maximum value
 *
 * @param array Array of numbers to analyze
 * @param n The number of elements in array
 *
 * @return The maximum of the array
 */
unsigned char find_maximum(unsigned char * array[], unsigned int n);


/**
 * @brief Returns the minimum value of an array
 *
 * Given an array of data and a length, returns the minimum value
 *
 * @param array Array of numbers to analyze
 * @param n The number of elements in array
 *
 * @return The minimum of the array
 */
unsigned char find_minimum(unsigned char * array[], unsigned int n);


/**
 * @brief Sorts the input array from largest to smallest
 *
 * Given an array of data and a length, sorts the array from 
 * largest to smallest. (The zeroth Element should be the
 * largest value, and the last element (n-1) should be the 
 * smallest value. )
 *
 * @param array Array of numbers to sort
 * @param n The number of elements in array
 */
void sort_array(unsigned char * array[], unsigned int n);


#endif /* __STATS_H__ */
