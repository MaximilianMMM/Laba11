#include <stdio.h>
#include <stdlib.h>

void kratni_5(int *a, int n, int *n_5);
void min(int *a, int n_5, int *min_i);

void kratni_5(int *a, int n, int *n_5){
    int i;
    for(i = 0; i < n; i++){
        if(a[i] % 5 == 0){
            *n_5 = i;
            break;
        }
    }
}

void min(int *a, int n_5, int *pmin_i){
    int i;
    *pmin_i = 0;
    for(i = 1; i < n_5; i++){
        if(a[*pmin_i] > a[i]) *pmin_i = i;
    }
}