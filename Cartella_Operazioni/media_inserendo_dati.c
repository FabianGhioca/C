#include <stdio.h>

int main()

{
    int tabella[10];
    float somma=0;
    int i;

    printf("Inserisci 10 numeri:\n");
    
for(i=0; i<10; i++){
    
    scanf("%d",&tabella[i]);
    somma= somma+tabella[i];

}
    printf("la media e':%f", somma / i);

    return 0;
}