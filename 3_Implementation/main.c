#include<stdio.h>
#include "func.h"
int main()
{
    printf("Enter the operation: \n1 for Resistance\n2 for capacitor\n3 for Inductor \n");
    int choice;
    scanf("%d",&choice);
    printf("%d",choice);
    switch (choice)
    {
    case 1:
        resistor();
        break;
    case 2:
        capacitorr();
        break;
    case 3:
        inductancee();
        break;
    
    default:
        printf("Invalid choice\n");
        break;
    }

}