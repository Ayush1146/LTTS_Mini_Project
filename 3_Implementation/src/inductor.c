/**
 * @file inductor.c
 * @author Nikhil Jose (nikhiljoseniju@gmail.com)
 * @brief program to find value of inductor in series and parallel
 * @version 0.1
 * @date 2021-04-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "func.h"

typedef struct inductance
{

    double inductor1;
    double inductor2;
} inductor ;

void inductancee()
{
    int operation_inductor;
    double inductor_result;
    inductor inductora;
    printf("Enter the operation you want to perform(1 or 2): \n1. Inductor in series\n2. Inductor in parallel\n");
    scanf("%d \n",&operation_inductor);
    
    
    printf("Enter two inductance in milli Henry: \n");
    
   

    scanf("%lf\n",&inductora.inductor1);
    scanf("%lf\n",&inductora.inductor2);
    
    switch (operation_inductor)
    {
    case 1: //series
        inductor_result = inductor_series_result(inductora.inductor1,inductora.inductor2);
        break;
    case 2: //parallel
        inductor_result = inductor_parallel_result(inductora.inductor1,inductora.inductor2);
        break;
    
    default:
    printf("Invalid Operation\n");
        break;
    }
    printf("The Resultant Inductance is : %lf milli Henry.\n",inductor_result);

}

double inductor_series_result(double ind1, double ind2){
    return ind1+ind2;
}

double inductor_parallel_result(double ind1, double ind2){
    return (ind1*ind2)/(ind1+ind2);
}