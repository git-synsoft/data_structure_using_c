#include <stdio.h>
#include <stdlib.h>
int *Arr;

int * create_Array(int items)
{
    int *A=(int *)malloc(items*sizeof(int));

    return A;
}

void  Insert_Value(int *A,int value,int position){
    A[position]=value;   
}

void display_Elements(int *A,int len){
    for(int i=0;i<len;i++){
        printf("%d\t",A[i]);
    }
    printf("\n");
}

int main(){
   int *p=create_Array(5);
   for(int i=0;i<5;i++){
    Insert_Value(p,i*7,i);

   }
   display_Elements(p,5);
}
