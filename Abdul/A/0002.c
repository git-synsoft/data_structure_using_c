//structures


#include<stdio.h>

struct Rectangle{
    int len;
    int br;

};


int main(){

   struct Rectangle r={34,238};//this will occupy mem in stack area 
   printf("%d\n",r.br*r.len);//dot (.)operator is used to access the member of structure .

}