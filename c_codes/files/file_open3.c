#include<stdio.h>
#include<string.h>
#include<stdbool.h>

#define MAXCHAR 1000

int main(){
    FILE *fp;
    char row[MAXCHAR];
    char *token;

    fp = fopen("data.txt", "r");
    while(feof(fp) != true){
        fgets(row, MAXCHAR, fp);
        printf("Fila: %s", row);
        token = strtok(row, ",");
        while (token != NULL){
            printf("Token: %s\n", token);
            token = strtok(NULL, ",");
        }
    }
    return 0;
}
