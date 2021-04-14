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
    scanf("%lf\n",&capacitora.capacitor2);
    
    switch (operation_capacitor)
    {
    case 1: //series
        capacitor_result = (capacitora.capacitor1*capacitora.capacitor2)/(capacitora.capacitor1+capacitora.capacitor2);
        break;
    case 2: //parallel
        capacitor_result = capacitora.capacitor1+capacitora.capacitor2;
        break;
    
    default:
    printf("Invalid Operation");
        break;
    }
    printf("The Resultant Capacitance is : %lf Micro Farad",capacitor_result);

}