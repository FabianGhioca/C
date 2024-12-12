#include <stdio.h>
int main(){
    // int i = 5;
    // float f = 3.7;
    // int iSomma = i + f;
    // float fSomma = i + f;
    // printf("La somma intera di %d e %f e' %d\n", i, f, iSomma);
    // printf("Conversione esplicita a float: %f\n", (float)iSomma);
    // printf("La somma float di %d e %f e' %f\n", i, f, fSomma);
    // return 0;



    // float a = 3.7;
    // int Inta = (int)a;
    // printf("Il valore e' stato convertito da float a int ed e' %d\n", Inta);



    // float valore_float = 5.75;
    // int valore_int = (int)valore_float;
    // printf("Valore float: %.2f\n", valore_float);
    // printf("Valore_int: %d\n", valore_int);


    
    // int num1;
    // float num2;
    // printf("Inserisci il valore di a: ");
    // scanf("%d", &num1);
    // printf("Inserisci il valore di b: ");
    // scanf("%d", &num2);
    // printf("La somma dei 2 valori e': %d", num2 + num1);


    // int settanta = 70;
    // char e = 'E';
    // printf("L' intero %d corrisponde al carattere %d", e, settanta);
    // printf("");



    // float P, R , T, SI;
    // printf("Inserire capitale, tasso, tempo :");
    // scanf("%f %f %f", &P, &R, &T);
    // SI = (P * R * T) / 100;
    // printf("Interesse semplice: %.2f\n", SI);



    // int a;
    // printf("Inserisci il valore: ");
    // scanf("%d", &a);
    // if (a % 2 == 0) {
    //     printf("Il numero inserito è pari");
        
    //     if (a % 5 == 0) {
    //         printf("Il numero è divisibile per 5");
    //     }

    // } else{
    //     printf("Il numero inserito e' dispari");
    // }



// int n, k, i;

// printf("Inserisci il valore di n: ");
// scanf("%d", &n);
// printf("Inserisci il valore di k: ");
// scanf("%d", &k);

// for (i = 1; i <= n; i++){
//     printf("Il multiplo %d di %d è %d\n", i, k, i * k);
// }



int N, somma = 0;
printf("Inserisci un numero: ");
scanf("%d", &N);

for (int i = 1; i <= N; i++) {
    somma += i;
}

printf("La somma dei %d numeri è %d\n", N, somma);




return 0;
}