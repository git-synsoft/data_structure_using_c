#include<iostream>

using namespace std;


class Recursion{
    public:
    
                    void _tail_recursion(int n=10){
                        if(n>0){
                            cout<<n<<endl;
                            _tail_recursion(n-1);
                        }
                    }
                    

                    void _head_recursion(int n=10){
                        if(n>0){
                            _head_recursion(n-1);
                            cout<<n<<endl;
                        }   
                    }

                    

};

int main (){
    Recursion r;
    cout<<"tail recursion "<<endl;
    r._tail_recursion();

    cout<<"Head recursion "<<endl;
    r._head_recursion();
}