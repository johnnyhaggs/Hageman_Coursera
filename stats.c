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
 * @brief statistics functions for analyzing arrays of char data items
 *
 * Reports min, max, mean, and median of array of char data items.
 *
 * @author John Hageman
 * @date July 17, 2020
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

unsigned char median, mean, maximum, minimum;

void main() {
	
  /* Variable Declarations */
  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};  
  unsigned int n_test = SIZE;

  /* Statistics and Printing Functions */
  //sort_array(test, n_test);
  //print_array(test, n_test);
  median = find_median(test, n_test);
  mean = find_mean(test, n_test);
  maximum = find_maximum(test, n_test);
  minimum = find_minimum(test, n_test);
  print_statistics();
}

/* Add other Implementation File Code Here */

void print_statistics(){
	//TODO: add code
	printf("Statistics:\nmedian: %u,\nmean: %u,\nmax: %u,\nmin: %u\n", median, mean, maximum, minimum);
}

void print_array(unsigned char* array, unsigned int n){
	//TODO: add code
	printf("[");
	for (int i = 0; i < n; i++){
		printf("%u ", array[i]);
	}
	printf("]\n");
}

unsigned char find_median(unsigned char* array, unsigned int n){
	unsigned char median;
	unsigned int mid_index = n / 2;

	sort_array(array, n);
       	
	if(n % 2 != 0) {
		//if number of elements in the array is odd,
		//we simply pick the middle element of the sorted array
		median = array[mid_index];
	}else{
		//if number of elements in the array is even,
		//we take the mean of the two elements around
		//the middle of the sorted array.
		median = (array[mid_index] + array[mid_index+1]) / 2;
	}
	
	return median;
}

unsigned char find_mean(unsigned char* array, unsigned int n){
	unsigned int sum = 0;
	unsigned char mean;
	for(int i = 0; i < n; i++) {sum += array[i];}
	mean = sum / n;
	return mean;
}

unsigned char find_maximum(unsigned char* array, unsigned int n){
	//TODO: add checks and prevent errors
	unsigned char maximum = 0;
	for(int i=0; i<n; i++){
		if (array[i] > maximum) {maximum = array[i];}
	}
	return maximum;
}

unsigned char find_minimum(unsigned char* array, unsigned int n){
	//TODO: add checks and prevent errors
	unsigned char minimum = 0xFF;
	for(int i=0; i<n; i++){
		if (array[i] < minimum) {minimum = array[i];}
	}
	return minimum;
}

void sort_array(unsigned char* array, unsigned int n){
	//reference: https://www.geeksforgeeks.org/c-program-to-sort-an-array-in-ascending-order/
	for (unsigned int i = 0; i < n - 1; i++){
		unsigned int min_index = i;
		for (unsigned int j = i + 1; j < n; j++){
			if (array[j] < array[min_index]) {min_index = j;}
		}
		swap(&array[i], &array[min_index]);
	}
}

void swap(unsigned char* a, unsigned char* b){
	unsigned int temp = *a;
	*a = *b;
	*b = temp;
}
