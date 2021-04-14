/**
 * @file func.h
 * @author Nikhil Jose (nikhiljoseniju@gmail.com)
 * @brief header file for electronic_operation
 * @version 0.1
 * @date 2021-04-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __FUNC_H__
#define __FUNC_H__

#include <stdio.h>

/**
 * @brief band functio declaration
 * 
 */

void band();

/**
 * @brief resistor function declaration
 * 
 */
void resistor();

//resistor series declaration
double resistance_in_series(double resis1,double resis2);
//resistor parallel declaration
double resistance_in_parallel(double resis1,double resis2);

/**
 * @brief capacitor function declaration
 * 
 */
void capacitorr();

// capacitor in series declaration
double capacitor_series_result(double cap_1, double cap_2);
// capacitor in parallel declaration
double capacitor_parallel_result(double cap_1, double cap_2);

/**
 * @brief inductor function declaration
 * 
 */
void inductancee();

// inductor in series
double inductor_series_result(double ind1, double ind2);
//inductor in parallel
double inductor_parallel_result(double ind1, double ind2);


#endif/* __FUNC_H__*/