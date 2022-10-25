#include <stdio.h>
#define G 9.81

int main(){
    FILE *fp;
    fp = fopen("data.txt", "w+");
    float x0 = 10; // m
    float v0 = 6;
    float t[20];
    float x1[20];
    int i;
    /*fprintf(fp, "t,x\n");*/
    for (i=0; i<20; i++){
        t[i] = i/10.0;
    }
    for (i=0; i<20; i++){
        x1[i] = x0 + v0 * t[i] - 0.5 * G * t[i] * t[i];
        fprintf(fp, "%f\t%f\n", t[i], x1[i]);  
    }
    fclose(fp);
    return 0;
}
