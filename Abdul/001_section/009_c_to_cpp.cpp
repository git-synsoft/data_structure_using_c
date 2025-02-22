#include <iostream>
using namespace std;


class Rect{
    private:
        int length ;
        int breadth;

    public:
        Rect(int len,int br){
            this->length=len;
            this->breadth=br;

        }

        int area(){
            return this->length* this->breadth;
        }

        int peremeter(){
            return 2*(this->length+ this->breadth);
        }

        ~Rect(){
            cout<<"getting out "<<endl;
        }
        

        

};


int main(){
    Rect r(34,48);

    int k=r.area();
    cout<<k<<endl;
    return 0;
}