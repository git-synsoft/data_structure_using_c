#include<stdio.h>


struct Rect{
    int length ;
    int breath;

} ;


int main(){
    struct Rect r1={13,45};
    printf("%d\n",(r1.length*r1.breath));

    return 0;
}