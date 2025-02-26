#include <stdio.h>

// functons
/*
functions is  group of instructions
*/

void swap_call_by_value(int a, int b)
{
    printf("%d :a %d b\n", a, b);
    int temp = a;
    a = b;
    b = temp;
    printf("%d :a %d b\n", a, b);
}
void swap_call_by_address(int *a,int *b){
    printf("%d :a %d b\n", *a, *b);
    int temp=*a;
    *a=*b;
    *b=temp;
    printf("%d :a %d b\n", *a, *b);

}
int main()
{
    int a = 10;
    int b = 20;
    swap_call_by_value(a, b);
    printf("\noriginal\n");
    printf("%d :a %d b\n", a, b);
    printf("\n*******\n");
    swap_call_by_address(&a,&b);
    printf("\noriginal\n");
    printf("%d :a %d b\n", a, b);
}