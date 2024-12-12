#include <stdio.h>

int main() {

    int a;
    int num1;
    int num2;

printf("1- addizione\n");
printf("2- sottrazione\n");
printf("3- moltiplicazione\n");
printf("4- divisione\n");
printf("Seleziona il tipo di operazione:");


scanf("%d", &a);

switch(a) {
    case 1:
        printf("Dai un valore ad a:");
        scanf("%d",&num1);
        printf("Dai un valore ad b:");
        scanf("%d",&num2);

        printf("La somma e': %d", num1 + num2);
    
break;

    case 2:
        printf("Dai un valore ad a:");
        scanf("%d",&num1);
        printf("Dai un valore ad b:");
        scanf("%d",&num2);

    if (num1>=num2)
        printf("La sottrazione e': %d", num1 - num2);

    else 
        printf("errore");

break;
    
    case 3:
        printf("Dai un valore ad a:");
        scanf("%d",&num1);
        printf("Dai un valore ad b:");
        scanf("%d",&num2);

        printf("Il prodotto e': %d", num1 * num2);

break;

    case 4: 
        printf("Dai un valore ad a:");
        scanf("%d",&num1);
        printf("Dai un valore ad b:");
        scanf("%d",&num2);

    if(num1>=num2)
        printf("La divisione e': %d", num1 / num2);

    else
        printf("errore");

break;

    default:
        return 0;
    
}

return 0;
}