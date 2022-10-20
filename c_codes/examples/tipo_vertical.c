#include <stdio.h>
#define G 9.81

int main(){
    float x0 = 10; // m
    float v0 = 6;
    float t[20];
    float x1[20];
    int i;
    for (i=0; i<20; i++)
        t[i] = i/10.0;
    }
    for (i=0; i<20; i++){
        x1[i] = x0 + v0 * t[i] - 0.5 * G * t[i] * t[i];
        printf("%f\t%f\t\n", t[i], x1[i]);  
    }
    return 0;
}
