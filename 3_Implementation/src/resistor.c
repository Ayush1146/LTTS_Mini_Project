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
#include<stdio.h>
#include "func.h"


void resistor()
{

    int choice;
    printf("Enter the operation: \n1 = Band\n2 = Series\n3 = Parallel \n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        band();
        break;
    // case 2:
    //     series();
    //     break;
    // case 3:
    //     parallel();
    //     break;
    
    default:
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

            //printf("%s %s %s %s %s",band1,band2,band3,band4,band5);
            /**
             * @brief converting all the user input values to lower case
             * 
             */
            for(int j=0;j<n;j++)
            {
                for(int i = 0; band1[1]; i++)
                {
                     band1[i] = tolower(band1[i]);
                    //  printf("%s",band1);
                }
                 for(int i = 0; band2[1]; i++)
                {
                     band2[i] = tolower(band2[i]);
                    //  printf("%s",band2);
                }
                for(int i = 0; band3[1]; i++)
                {
                     band3[i] = tolower(band1[i]);
                    //  printf("%s",band3);
                }
                 for(int i = 0; band4[1]; i++)
                {
                     band4[i] = tolower(band4[i]);
                    //  printf("%s",band4);
                }
                 for(int i = 0; band5[1]; i++)
                {
                     band5[i] = tolower(band5[i]);
                //      printf("%s",band5);
                }
                

            }
            //printf("%s %s %s %s %s",band1,band2,band3,band4,band5);

        int black = 0, brown = 1, red = 2, orange = 3, yellow = 4, green = 5,blue = 6,violet =7,grey = 8,white = 9,gold = 5,silver = 10;
        
        
    }

