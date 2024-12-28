#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
// LETTURA DEL  MASSIMO E DEL MINIMO ES. 1
// #define NUMDATI 10



// Calcolo del COS e SIN

// int main(){
//     float numero;
//     float sinNumero;
//     printf("inserisci un numero: ");
//     scanf("%f", &numero);
//     sinNumero = sin(numero);
//     printf("sin(%.2f) = %.2f\n", numero, sinNumero);
//     printf("cos(%.2f) = %.2f\n", numero, cos(numero));
//     printf("|%.2f| = %.2f\n", numero, fabs(numero));
//     printf("Intero inferiore: %.0f\n", floor(numero));
//     printf("Intero superiore: %.0f\n", ceil(numero));

// return 0;
// }



// calcolo della radice quadrata

// int main() {
//     double numero, radice;
    
//     printf("Inserisci un numero: ");
//     scanf("%lf", &numero);

//     if (numero < 0) {
//         printf("Errore: Non è possibile calcolare la radice quadrata di un numero negativo.\n");
//     } else {
//         radice = sqrt(numero);
//         printf("La radice quadrata di %.2lf è %.2lf\n", numero, radice);
//     }
//     return 0;
// }




// LETTURA DEL MASSIMO E DEL MINIMO ES. 1

// int main(){
//     int minimo, massimo, ind;
//     int vettdati[NUMDATI];
//     // LETTURA DEI DATI
//     for (ind = 0; ind < NUMDATI; ind++) {
//         printf("\nIntroduci vettdati[%d]: ", ind);
//         scanf("%d", &vettdati[ind]);
//     }
//     // CERCA IL MASSIMO E IL MINIMO
//     massimo = vettdati[0];
//     minimo =vettdati[0];
//     for(ind = 1; ind < NUMDATI; ind++) {
//         if (vettdati[ind] > massimo) 
//             massimo = vettdati[ind];
//         else {
//             if (vettdati[ind] < minimo) {
//                 minimo = vettdati[ind];
//             }
//         }
//     printf("\nIl massimo = %d e il minimo = %d\n ", massimo, minimo);
//     }

// return 0;
// }



// definire se K è uguale a uno dei valori presenti nel vettore

// int main() {
//     int vect[5], k, index;
//     for(index = 0; index < 5; index++) {
//         printf("Dammi un numero: ");
//         scanf("%d", &vect[index]);
//     }
//     printf("Dammi k: ");
//     scanf("%d", &k);
//     for (index = 0; index < 5; index++){
//         if (k == vect[index]) {
//             printf("L'elemento %d è uguale a k\n", index);
//         }
//     }

// return 0;
// }



// Dichiarare un matrice 3*3 e riempirla con in numeri da 1 a 9 e fare las

// int main() 
// {
// int matrix[3][3];
// int value = 1;
// int somma = 0;

//     for (int i = 0; i < 3; i++) 
//     {
//         for (int j = 0; j < 3; j++) 
//         {
//             matrix [i][j] = value++;
//         }
//     }
//     for (int i = 0; i < 3; i++) 
//     {
//         for (int j = 0; j < 3; j++) 
//         {
//             printf("L'elemento [%d][%d] è: %d\n", i + 1, j + 1, matrix[i][j]);
//             somma += matrix[i][j];
//         }
//     }
//     printf("La somma è  = %d", somma);

// return 0;
// }



// verificare se una parola è PALINDROMA

int main(void) 
{
    char parola[50];
    int i, n;
    printf("Inserisci una parola: ");
    scanf("%s", parola);
    n = strlen(parola);         // (strlen) serve per definire la lunghezza della stringa 
    for (i=0; i < n/2 && parola[i] == parola[n-i-1]; i++);
    
        if (i == n/2) 
            printf("SI\n");
        
        else
            printf("NO\n");
    
return (0);
}