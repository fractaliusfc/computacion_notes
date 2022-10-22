#include <stdio.h>

int main(){
    FILE *fp;
    
    fp = fopen("test.txt", "r+");
    fprintf(fp, "Hola mundo\n");
    fputs("Hola mundo con fputs\n", fp);
    fclose(fp);
    return 0;
}
