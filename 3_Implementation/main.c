#include<stdio.h>
#include "func.h"
int main()
{
    printf("Enter the operation: \n1 = Resistance\n2 = capacitor\n3 = Inductor \n");
    int choice;
    scanf("%d",&choice);
    printf("%d",choice);
    switch (choice)
    {
    case 1:
        resistor();
        break;
    // case 2:
    //     capacitor();
    //     break;
    // case 3:
    //     inductor();
    //     break;
    
    default:
        printf("Invalid choice\n");
        break;
    }

}