/**
 * @file carbon_operations.h
 * @author Shriya Fadnavis
 * @brief Header file for Carbon Footprint Calculator application with Arithmetic operations
 *
 */

#ifndef __CARBON_OPERATIONS_H__
#define __CARBON_OPERATIONS_H__

#include <stdio.h>
#include <stdlib.h>

/**
* @brief Multiplies the operand1 and 12 and 0.85 and returns the result
* @param[in] operand1 
* @return Result of operand1 * 12 * 0.85
*/
int elbill(int operand1);

/**
* @brief Multiplies the operand1 and 12 and 2.296 and returns the result
* @param[in] operand1 
* @return Result of operand1 * 12 * 2.296
*/
int ptbill(int operand1);


/**
* @brief Multiplies the operand1 and 14 and 2.983 and returns the result
* @param[in] operand1 
* @return Result of operand1 * 14 * 2.983
*/
int lgbill(int operand1);

/**
* @brief Multiplies the operand1 and 12 and 0.79 and returns the result
* @param[in] operand1 
* @return Result of operand1 * 12 * 0.79
*/
int mlbill(int operand1);

/**
* @brief Multiplies the operand1 and 11 or 44 according number of hours and returns the result
* @param[in] operand1 
* @return Result of operand1 * 11 or 44
*/
int flihrs(int operand1);


/**
* @brief Multiplies the operand1 and 0.5 and returns the result
* @param[in] operand1 
* @return Result of operand1 * 0.5
*/
int plnplt(int operand1);


#endif  /* #define __CALCULATOR_OPERATIONS_H__ */
