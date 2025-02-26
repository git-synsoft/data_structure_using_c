#include <stdio.h>

enum week{mon,tue,wed,thru,fri,sat,sun};
int ext_var=30;

int print_value(){
    auto int num=10;
    printf("%d\n",num);

    return num;
}

// int main(){
//     print_value();
//     enum week day;
//     day=tue;
//     printf("%d\n",day);


// }