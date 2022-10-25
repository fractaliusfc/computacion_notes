#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int c, semilla;
    float n;
    semilla = time(NULL);
    srand(semilla);
    for(c=1; c<=10; c++){
        n = (rand()/(float)RAND_MAX);
        printf("%f\n", n);
    }
    return 0;
}
