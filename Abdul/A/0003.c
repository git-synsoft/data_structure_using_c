//pointers
/*
pointers are address variable used to indirectly accessing data  

*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    int a=20;
    int *p_a=&a;
    printf("%d\n",*p_a);
    p_a=NULL;
    free(p_a);

   
    int *p_d=(int *)malloc(5*sizeof(int));
    int arr[5]={1,3,5,6,8};
    p_d=arr;
    for(int i=0;i<5;i++){
        printf("%d\n",p_d[i]);
    }
    p_d=NULL;
    free(p_d);
    
  
    
    return 0;

}

