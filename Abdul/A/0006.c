#include<stdio.h>
#include<stdlib.h>
//array as parameter

void *fun(int *A,int n){
    for(int i=0;i<n;i++){
        A[i]=A[i]*23;
    }
    int *p=(int *)malloc(5*sizeof(int));
    p=A;
    A=NULL;
    free(A);
    return p;
}

int main(){
    int A[]={1,2,4,6,9};
    int *pp= fun(A,5);
    for(int i=0;i<5;i++){
        printf("%d\n",pp[i]);
    }
    pp=NULL;
    free(pp);
}
