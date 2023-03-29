#include <stdio.h>
#include <stdlib.h>

void perevir(int *a, int n, int *flag);
void roztav(int *a, int n, int *a_new);

void perevir(int *a, int n, int *flag){
    int i,j;
    *flag = 0;
    for(i = 0, j = n; i < j; i++, j--){
        if(a[i] != a[j]) {
            *flag = 1;
            break;
        }
    }
}

void roztav(int *a, int n, int *a_new){
    int i,j;

    for(i = 0, j = 0; i < n; i+= 2, j++) a_new[j] = a[i];
    for(i = 1; i < n; i+= 2, j++) a_new[j] = a[i];
}