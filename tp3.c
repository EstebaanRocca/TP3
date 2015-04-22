#include <stdio.h>

main(){

    int celsius;
    float fahr;
    const int upper = 300;
    const int step = 20;
    const float fraccion = 9.0/5;
    const int ordenada = 32;

    for (celsius = 0; celsius <= upper; celsius = celsius + step)
        {
            fahr = fraccion * celsius + ordenada;
            printf("%4d %6.1f\n", celsius, fahr);
        }
}
