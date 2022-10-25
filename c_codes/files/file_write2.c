#include <stdio.h>

int main(){
    FILE *fp;

    fp = fopen("test.txt", "w+");
    fprintf(fp, "Esto es una prueba para fprintf...\n");
    fputs("Esto es una prueba para fputs...\n", fp);
    fclose(fp);
}
