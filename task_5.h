#include <stdio.h>
#include <stdlib.h>

void maximum(float *a, int i, int n, float *max);
void riznitsa(float *a, int i, int n, float *rizn);
void seredne(float *a, int i, int n, float *ser);

void maximum(float *a, int i, int n, float *max){
    int j;
    *max = a[0];
    for(j = 1; j < n; j++){
        if(*max < (a[j])) *max = (a[j]);
    }
}

void riznitsa(float *a, int i, int n, float *rizn) {
    *rizn = 0;
    *rizn = ((a[0]) - (a[n-1]));
}

void seredne(float *a, int i, int n, float *ser) {
    int j;

    *ser=0;
    for (j = 0; j < n; j++) *ser += (a[j]);
    *ser /= n;
}