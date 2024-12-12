#include <stdio.h>

int main() {
    int num1;
    int num2;
    
    printf("Inserisci numero a:");
    scanf("%d",&num1);

    printf("Inserisci numero b:");
    scanf("%d",&num2);

if (num1 == num2*num2)
    printf("a e' il quadrato di b");

else
    return 0;
}