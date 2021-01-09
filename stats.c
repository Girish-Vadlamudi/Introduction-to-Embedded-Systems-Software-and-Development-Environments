/**********
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *********/
/**
 * @file <stats.c> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Girish Vadlamudi>
 * @date <06-January-2021>
 *
 */



#include <stdio.h>
#include "stats.h"
#define SIZE (40)
void main() {
int i,j,a,n, position, median, minimum, maximum;
float mean;
static int array;
int size;
int test[] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
void print_array(int test[],int size){	
printf("Given array:\n");
for(i=0;i<size;i++)
{
printf("%d\t", test[i]);
}
printf("\n");
}
int sort_array(int array[], int size){
for(i=0;i<size;++i)
{
for(j=i+1;j<size;++j)
{
if(array[i]<array[j])
{
a = array[i];
array[i] = array[j];
array[j] = a;
}
}
}
printf("Sorted Array:\n");
for (i=0;i<size;i++){
printf("%d\t",array[i]);
}
printf("\n");
}
int find_median(int array[], int size){
for(i=0;i<size;++i)
{
for(j=i+1;j<size;++j)
{
if(array[i]<array[j])
{
a = array[i];
array[i] = array[j];
array[j] = a;
}
}
}
position = (size/2);
median = (array[position]);
printf("\n");
printf("Median:%d", median);
printf("\n");
}
int find_mean( int array[], int size){
for(i=0;i<size;i++)
{
mean = mean + array[i]; 
}
mean = (mean/size);
printf("\n");
printf("Mean:%f", mean);
printf("\n");
}
int find_minimum(int array[], int size){
for(i=0;i<size;++i)
{
for(j=i+1;j<size;++j)
{
if(array[i]<array[j])
{
a = array[i];
array[i] = array[j];
array[j] = a;
}
}
}
minimum = array[size-1];
printf("\n");
printf("Minimum:%d", minimum);
printf("\n");
}
int find_maximum(int array[], int size){
for(i=0;i<size;++i)
{
for(j=i+1;j<size;++j)
{
if(array[i]<array[j])
{
a = array[i];
array[i] = array[j];
array[j] = a;
}
}
}
maximum = array[0];
printf("\n");
printf("Maximum:%d", maximum);
printf("\n");
}
int print_statistics(int array[], int size){
find_median(array, size);
find_mean(array, size);
find_minimum(array, size);
find_maximum(array, size);
}
print_array(test, SIZE);
sort_array(test, SIZE);
print_statistics(test, SIZE);
} 
