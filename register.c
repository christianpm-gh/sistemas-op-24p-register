#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Ejemplo de ejecucion de un ciclo for con un num. max. de iteraciones
 * Tenemos que pasar ese numero maximo en lugar de "numeroIteraciones".
 * ejemplo: ./registerEXE numeroIteraciones
 * argv[0] -> nombre del programa
 * argv[1] -> numero de iteraciones maximo
 * para fines de esta demostracion, haremos numeroIteraciones = 1x10^9
 */

int main(int argc, char* argv[]) {

    // verificamos si los argumentos son los que se solicitaron
    if(argc != 2) {
        printf("Forma de uso: %s ValorLong \n", argv[0]);
        return -1;
    }
    long max = atol(argv[1]);

    // tomamos registro del tiempo antes de ejecutar el for
    clock_t t = clock();
    printf("Inicio\n");

    register int n=0;
    for(n=0; n<max; n++);

    printf("Fin\n");

    // calculamos el tiempo que tardo en ejecutarse
    t = clock() - t;
    double tiempo = ((double)t)/CLOCKS_PER_SEC;
    printf("tiempo transcurrido %f segundos\n", tiempo);
    return 0;
}
