#include <stdio.h>
#include <stdlib.h>



struct Rect {
    int len;
    int br;

};


int main(){

    struct Rect *p=(struct Rect *)malloc(sizeof(struct Rect));

    p->br=34;
    p->len=48;
    printf("%d\n",(p->len*p->br));
    free(p);
    return 0;
}