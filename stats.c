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
 * @brief Anaylzes a hard coded array
 *
 * Analyze unsigned char data items and report analytics on the maximum, 
 * minimum, mean, and median of the data set. Sorting is also performed.
 *
 * @author Girish Vadlamudi
 * @date 10-Jan-2021
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
  //Note: Calculating statistics involves sorting the array, so the 
  //2nd print array prints a sorted array.
  print_array(&test[0], SIZE);
  print_statistics(&test[0], SIZE);
  printf("\n");
  print_array(&test[0], SIZE);
}

/* Add other Implementation File Code Here */

void print_statistics(unsigned char *arr, unsigned int len)
{
	printf("Calculating Statistics!\n");
	printf("Median: %d\n", find_median(arr, len));
	printf("Mean  : %d\n", find_mean(arr, len));
	printf("Max   : %d\n", find_max(arr, len));
	printf("Min   : %d\n", find_min(arr, len));
}


void print_array(unsigned char *arr, unsigned int len)
{
	int i;
	printf("\nPrinting the Array!\n");
	printf("\n");
	for (i = 0; i < len; ++i)
	{
		printf("%3d ", arr[i]);
		if (i>0 && (i+1)%8 == 0)
		{
			printf("\n");
		}

	}
	printf("\n");
}

unsigned char find_median(unsigned char *arr, unsigned int len)
{
	sort_array(arr, SIZE);
	return arr[len/2];
}

unsigned char find_mean(unsigned char *arr, unsigned int len)
{
	int sum,i;
	sum = 0;
	for (i = 0; i < len; ++i)
	{
		sum += arr[i];
	}
	return sum/len;
}

unsigned char find_max(unsigned char *arr, unsigned int len)
{
	sort_array(arr, SIZE);
	return arr[len-1];
}

unsigned char find_min(unsigned char *arr, unsigned int len)
{
	sort_array(arr, SIZE);
	return arr[0];
}

void sort_array(unsigned char *arr, unsigned int len)
{
	int i,c;
	if (is_sorted(arr,len))
		return;
	printf("Sorting the Array!\n");
	for (i = 0; i < len; ++i)
	{
		int min_loc = i;
		for(c = i; c < len; c++)
		{
			if(arr[c] < arr[min_loc]) 
				min_loc = c;
		}
		int temp = arr[i];
		arr[i] = arr[min_loc];
		arr[min_loc] = temp;
	}
	printf("Sorted!\n");
}
unsigned char is_sorted(unsigned char *arr, unsigned int len)
{
	int c;
	for(c = 0; c < len-1; c++)
	{
		if(arr[c] > arr[c+1]) 
			return 0;
	}
	return 1;
}
