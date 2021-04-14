/**
 * @file resistor.c
 * @author Nikhil Jose (nikhiljoseniju@gmail.com)
 * @brief file to calculate the resistance from band colors and also to calculate series and parallel calculation of resistance
 * @version 0.1
 * @date 2021-04-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "func.h"

typedef struct resistancee{
    double resistance1;
    double resistance2;
}resistancee;
void resistor()
{

    int choice;
    printf("Enter the operation: \n1 for Band\n2 for Series\n3 for Parallel \n");
    scanf("%d",&choice);
    resistancee resist;
    switch (choice)
    {
    case 1:
        band();
        break;
    case 2:
        scanf("%lf",&resist.resistance1);
        scanf("%lf",&resist.resistance2);
        resistance_in_series(resist.resistance1,resist.resistance2);
        break;
    case 3:
        scanf("%lf",&resist.resistance1);
        scanf("%lf",&resist.resistance2);
        resistance_in_parallel(resist.resistance1,resist.resistance2);
        break;
    
    default:
        printf("Invalid Operation");
        break;
    }
    
}

void band()
    {
        printf("Enter the band type(1/2): \n1 = Four band\n2 = Five band\n");
        int bandno;
        scanf("%d",&bandno);
        char band1[20],band2[20],band3[20],band4[20],band5[20];
        int n;
        if(bandno==1)
        n=4;
        else if(bandno==2)
        n=5;
            // char user_input_values[n][20];
            for (int index=1;index<=n;index++)
            {
                printf("Enter the color of band  %d",index);
                if(index==1)
                scanf("%s",band1);
                else if(index==2)
                scanf("%s",band2);
                else if(index==3)
                scanf("%s",band3);
                else if(index==4)
                scanf("%s",band4);
                else if(index==5)
                scanf("%s",band5);
               

               

                
            }

            printf("%s %s %s %s %s",band1,band2,band3,band4,band5);
            
        int black = 0, brown = 1, red = 2, orange = 3, yellow = 4, green = 5,blue = 6,violet =7,grey = 8,white = 9,gold = 5,silver = 10;
        
        
    }

    /**
     * @brief resistance in series calculation
     * 
     * @param resis1 first resistance value
     * @param resis2 second resistance value
     * @return double 
     */
    double resistance_in_series(double resis1,double resis2){
        return resis1+resis2;
    }

    double resistance_in_parallel(double resis1,double resis2){
        return (resis1*resis2)/(resis1+resis2);
    }

