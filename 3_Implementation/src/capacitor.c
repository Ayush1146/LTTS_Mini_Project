/**
 * @file capacitor.c
 * @author Nikhil Jose (nikhiljoseniju@gmail.com)
 * @brief program to find value of capacitor in series and parallel
 * @version 0.1
 * @date 2021-04-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "func.h"

typedef struct capacitance
{

    double capacitor1;
    double capacitor2;
} capacitor ;




void capacitorr()
{
    int operation_capacitor;
    double capacitor_result;
    capacitor capacitora;
    printf("Enter the operation you want to perform(1 or 2): \n1. Capacitor in series\n2. Capacitor in parallel\n");
    scanf("%d",&operation_capacitor);


    printf("Enter two Capacitance in Micro Farad: \n");

    scanf("%lf\n",&capacitora.capacitor1);
    scanf("%lf",&capacitora.capacitor2);
    
    switch (operation_capacitor)
    {
    case 1: //series
        capacitor_result = capacitor_series_result(capacitora.capacitor1,capacitora.capacitor2); 
        break;
    case 2: //parallel
        capacitor_result = capacitor_parallel_result(capacitora.capacitor1,capacitora.capacitor2);
        break;
    
    default:
    printf("Invalid Operation\n");
        break;
    }
    printf("The Resultant Capacitance is : %0.2lf Micro Farad.\n",capacitor_result);

}
/**
 * @brief 
 * 
 * @param cap_1 value of first capacitance
 * @param cap_2 value of second capacitance
 * @return double 
 */
double capacitor_series_result(double cap_1, double cap_2){
    return (cap_1*cap_2)/(cap_1+cap_2);
}

double capacitor_parallel_result(double cap_1, double cap_2){
    return (cap_1+cap_2);
}
