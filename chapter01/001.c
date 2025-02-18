#include<stdio.h>

/*
declaring variables 

*/
int main(){
    //constants
    const  float PI=3.14;

    //non constants
    int emp_num;
    float salary;
    char grade;
    double balance_amt;
    unsigned short int account_no;
    unsigned long int transaction_Numbers;

    //initializing variables
     emp_num=10120;
     salary=39420.00;
     grade='A';
     balance_amt=30000.378;
     account_no=22838;
     transaction_Numbers=23844737;


     printf("\f%.2f\n\f",PI);

     //scanf 

     /*
        *[width][h or l or L][type]
        type : 
        %c              for single characters 
        %d,%i           for single values 
        %e,%E,%f,%g,%G  for floating points 
        %o              for octal 
        %u              for unsigned values
        %x,%X           for hexadecimal values 

     */

     unsigned int scan_value;
     scanf("%4ui",&scan_value);
     printf("%i",scan_value);
     printf("\n");

     //conditional operator
     int xx=45>89?77:12;
     printf("%d",xx);
     printf("\n");




}