/**
 * @file resistor.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "func.h"
#include <stdio.h>

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
        char l1[20],l2[20],l3[20],l4[20],l5[20];
        int n;
        if(bandno==1)
        n=4;
        else if(bandno==2)
        n=5;
            
            for (int i=1;i<=n;i++)
            {
                printf("Enter the color of band  %d",i);
                if(i==1)
                scanf("%s",l1);
                else if(i==2)
                scanf("%s",l2);
                else if(i==3)
                scanf("%s",l3);
                else if(i==4)
                scanf("%s",l4);
                else if(i==5)
                scanf("%s",l5);

            }
            printf("%s %s %s %s %s",l1,l2,l3,l4,l5);
          
    }

