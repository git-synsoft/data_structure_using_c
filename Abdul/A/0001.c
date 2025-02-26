#include <stdio.h>

//arrays basics 
        /*
        collection of similar data elements 
        */


int main(){

    int A[5];
    A[0]=39;


    //declearation 

    int AA[5];//it will be created inside a stack 

    //initializing 
    int B[5]={2,3,4,5,9};

    for(int i=0;i<5;i++){
        printf("%d\n",B[i]);
    }
    printf("size of element \n");
    printf("%lu\n",sizeof(A));
    


}