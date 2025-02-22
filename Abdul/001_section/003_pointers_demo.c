#include <stdio.h>

#include<stdlib.h>

int main()
{
    int x = 10;
    int *p = &x;
    printf("%p\n", p);
    printf("%d\n", *p);
    //dynamic allocation of mem 


    int * pp=(int * )malloc(5*sizeof(int));
    for(int i=0;i<5;i++){
        pp[i]=i+34*i;

    }

    for(int i=0;i<5;i++){
        printf("%d\t",pp[i]);

    }
    printf("\n");

    //deallocating
    
    free(pp);
    return 0;
}