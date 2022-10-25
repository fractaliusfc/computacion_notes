#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define MAXCHAR 1000

int main(){
    FILE *fp;
    char row[MAXCHAR];
    fp = fopen("data.txt", "r");
    while(feof(fp) != true){
        fgets(row, MAXCHAR, fp);
        printf("Linea: %s", row);
    }
    return 0;
}
