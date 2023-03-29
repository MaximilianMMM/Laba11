#include <stdio.h>
#include <stdlib.h>

void create_float_a(float **a, int *n);
void vvid_float_a(float *a, int n);
void create_int_a(int **a, int *n);
void vvid_int_a(int *a, int n);
void create_a_new(int **a_new, int n);
void vivid_int_a(int *a, int n);
void create_matrix_a(float ***a, int *n);
void vvid_matrix_a(float **a, int n);

void create_float_a(float **a, int *n){
    printf("\nВведіть к-сть значень: ");
    scanf("%d", n);

    *a = (float*)malloc((*n) * sizeof(float));
}

void vvid_float_a(float *a, int n){
    printf("Введіть значення: ");
    int i;
    for(i = 0; i < n; i++) scanf("%f", &a[i]);
}

void create_int_a(int **a, int *n){
    printf("\nВведіть к-сть значень: ");
    scanf("%d", n);

    *a = (int*)malloc((*n) * sizeof(int));
}

void vvid_int_a(int *a, int n){
    printf("Введіть значення: ");
    int i;
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
}

void create_a_new(int **a_new, int n){
    *a_new = (int*)malloc(n * sizeof(int));
}

void vivid_int_a(int *a, int n){
    int p,i = 0;
    printf("%d ",a[i]);

    while((a[i] != a[a[i]]) || (a[i] == a[n-1])){
        if(i == n) break;
        p = a[i];
        printf("%d ",a[p]);
        i = a[i];
    }
}

void create_matrix_a(float ***a, int *n){
    int i;

    printf("\nВведіть к-сть значень: ");
    scanf("%d", n);

    *a = (float**)malloc((*n)*sizeof(float*));
    for(i = 0; i < (*n); i++){
        (*a)[i] = (float*)malloc((*n)*sizeof(float));
    }
}

void vvid_matrix_a(float **a, int n){
    printf("Введіть значення: ");
    int i,j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++) scanf("%f", &a[i][j]);
    }
}