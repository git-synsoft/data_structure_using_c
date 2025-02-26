#include<stdio.h>
#include<stdlib.h>


//pointer to structure 

struct Rect{
    int len;
    int br;

};



int main(){

    struct Rect *A;
    A=(struct Rect * )malloc(sizeof(struct Rect));
    A->br=34;
    A->len=28;
    printf("%d\n",A->br*A->len);
    A=NULL;
    free(A);

}