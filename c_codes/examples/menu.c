#include <stdio.h>

int main(){
    int opcion;
    printf("Ejemplo menu simple\n");
    printf("Elige una opción:\n");
    printf("1) Pildora azul\n");
    printf("2) Pildora roja\n");
    scanf("%d", &opcion);
    if (opcion == 1){
        printf("Elegiste la pildora azul\n");
    }
    else if (opcion == 2){
        printf("Elegiste la pildora roja\n");
    }
    else{
        printf("Opcion incorrecta\n");
    }
    printf("Fin del menu simple\n");
}
