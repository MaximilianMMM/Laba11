#include <stdio.h>
#include <stdlib.h>

void summa(int n, float *a, float *sum);
void dobutoc(int n, float *a, float *dob);

void summa(int n, float *a, float *sum){
    int i;
    for(i=1;i<n;i+=2) *sum=*sum+a[i];
}

void dobutoc(int n, float *a, float *dob){
    int i;
    for(i=0;i<n;i+=2) *dob=*dob*a[i];
}
