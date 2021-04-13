#include<stdio.h>

int main()
{
    printf("Enter the operation: \n1 = Resistance\n2 = capacitor\n3 = Inductor \n");
    int choice;
    scanf("%d",&choice);
    printf("%d",choice);
    switch (choice)
    {
    case 1:
        resistance();
        break;
    case 2:
        capacitance();
        break;
    case 3:
        inductance();
        break;
    
    default:
        printf("Invalid choice\n");
        break;
    }

}