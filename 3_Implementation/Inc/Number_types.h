/**
 * @file Number_types.h
 * @author Sree Likitha Potnuru
 * @brief Header file for checking the type of number
 *
 */

#ifndef _NUMBER_TYPES_H_
#define _NUMBER_TYPES_H_

#include <stdio.h>

/**
* @brief checks the n is prime number and returns the result
* @param[in] n
* @return Result of n whether prime number or not
*/
int prime_numbers(int n);

/**
* @brief checks the n is perfect number and returns the result
* @param[in] n
* @return Result of n whether perfect number or not
*/
int perfect_numbers(int n);

/**
* @brief checks the n is armstrong number and returns the result
* @param[in] n
* @return Result of n whether armstrong number or not
*/
int armstrong_numbers(int n);

/**
* @brief checks the n is palindrome number and returns the result 
* @param[in] n 
* @return Result of n whether palindrome number or not
*/
int palindrome_numbers(int n);

#endif  /* #define _NUMBER_TYPES_H_ */
