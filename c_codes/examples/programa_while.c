#include <stdio.h>

int main(){
    char control = 's';
    printf("Ejemplo de programa en loop\n");
    while (control == 's'){
        printf("Hola mundo\n");
        printf("Deseas repetir?");
        scanf(" %c", &control);
    }
    return 0;
}
