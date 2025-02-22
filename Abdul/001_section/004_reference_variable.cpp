#include <iostream>


using namespace std;
 


int main(){
    int a=109;
    int &b=a;
    cout<<a<<endl;
    cout<<b<<endl;
    b++;

    cout<<a<<endl;
    
    return 0;
}