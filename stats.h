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
 * @brief Header for stats.c
 *
 * Analyze unsigned char data items and report analytics on the maximum, 
 * minimum, mean, and median of the data set. Sorting is also performed.
 *
 * @author Mike T
 * @date 1/8
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief Print statisitcs of a given array
 * 
 * A function that prints the statistics of an array 
 * including minimum, maximum, mean, and median.

 * @param arr input array to be operated on
 * @param len length of input array
 *
 * @return void
 */
void print_statistics(unsigned char *arr, unsigned int len);

/**
 * @brief Print a given array
 *
 * @param arr input array to be operated on
 * @param len length of input array
 *
 * @return void
 */
void print_array(unsigned char *arr, unsigned int len);

/**
 * @brief Find the median of a given array
 *
 * @param arr input array to be operated on
 * @param len length of input array
 *
 * @return unsigned char median value
 */
unsigned char find_median(unsigned char *arr, unsigned int len);

/**
 * @brief Find the mean of a given array
 *
 * @param arr input array to be operated on
 * @param len length of input array
 *
 * @return unsigned char mean
 */
unsigned char find_mean(unsigned char *arr, unsigned int len);

/**
 * @brief Find the max of a given array
 *
 * @param arr input array to be operated on
 * @param len length of input array
 *
 * @return unsigned char max
 */
unsigned char find_max(unsigned char *arr, unsigned int len);

/**
 * @brief Find the min of a given array
 *
 * @param arr input array to be operated on
 * @param len length of input array
 *
 * @return unsigned char min
 */
unsigned char find_min(unsigned char *arr, unsigned int len);

/**
 * @brief Sorts an array in place
 *
 * @param arr input array to be operated on
 * @param len length of input array
 *
 * @modifies the given array 
 	(sorts in place)
 */
void sort_array(unsigned char *arr, unsigned int len);

/**
 * @brief Checks if a given array is sorted
 *
 * @param arr input array to be operated on
 * @param len length of input array
 *
 * @returns 1 if sorted 0 if not
 */
unsigned char is_sorted(unsigned char *arr, unsigned int len);

#endif /* __STATS_H__ */
