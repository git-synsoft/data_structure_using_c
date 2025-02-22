#include <stdio.h>
#include <stdlib.h>


struct Rect{
    int len;
    int br;

};

void fun(struct Rect *p){
    p->len=20;
    printf("Length is %d\n",p->len);
    printf("breadth is %d\n",p->br);
}

int main(){
    struct Rect r={238,44};
    fun(&r);


    struct Rect *pp;
    pp=(struct Rect *)malloc(sizeof(struct Rect));
    pp->br=344;
    pp->len=23;
    free(pp);
    return 0;
}