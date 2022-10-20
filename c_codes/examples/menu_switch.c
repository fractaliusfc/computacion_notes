#include <stdio.h>

int main(){
    int opcion;
    printf("Ejemplo menu simple (con switch)\n");
    printf("Elige una opción:\n");
    printf("1) Pildora azul\n");
    printf("2) Pildora roja\n");
    scanf("%d", &opcion);
    switch(opcion){
        case 1:
            printf("Elegiste la pildora azul\n");
            break;
        case 2:
            printf("Elegiste la pildora roja\n");
            break;
        default:
            printf("Opcion incorrecta\n");
    }
    printf("Fin del menu simple (con switch)\n");
}
