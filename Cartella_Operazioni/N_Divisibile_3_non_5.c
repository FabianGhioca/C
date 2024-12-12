#include <stdio.h>

int main() {

    int a;

    printf("Inserisci numero a:");
    scanf("%d",&a);

    if((a%3) == 0 && (a%5)!=0)
        printf("a e' divisibile per 3 ma non per 5");
        
    else
        printf("a non e' divisibile per 3");
        
    return 0;
}