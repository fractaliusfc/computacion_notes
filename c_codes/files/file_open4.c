#include <stdio.h>

int main(){
    int i;
    FILE *fp;
    float a, b;
    fp = fopen("data.txt", "r");
    for(i=0; i<=10;i++){
        fscanf(fp, "%f %f", &a, &b);
        printf("%f %f\n", a, b);
    }
    return 0;
}
