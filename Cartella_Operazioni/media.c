#include <stdio.h>

int main()

{
    int tabella[10] = {20,23,16,46,12,34,86,10,53,23};
    float somma=0;
    int i;

for(i=0; i<10; i++){

    somma= somma+tabella[i];

}
    printf("la media e':%f", somma / i);

    return 0;
}