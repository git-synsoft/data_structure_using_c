#include<stdio.h>
#include<stdlib.h>



struct Rect{
    int len;
    int br;

};


struct Rect * fun(int l,int b){
    struct Rect *p=(struct Rect *)malloc(sizeof(struct Rect));
    p->br=b;
    p->len=l;
    return p;
}

int main(){

    struct Rect *pp=fun(34,88);
    printf("%d\n",pp->br);
    printf("%d\n",pp->len);

    pp=NULL;
    free(pp);
    return 0;

}