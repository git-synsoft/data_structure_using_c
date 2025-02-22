#include<iostream>

using namespace std;



class Rect{
    int len;
    int br;

    public:
            Rect(int l=0,int b=0){
                this->len=l;
                this->br=b;
        
        }
            int area(){
                return len*br;
            }
            int perimeter(){
                return 2*(len+br);
            }
            void setLength(int l){
                this->len=l;
           }
            void setBreadth(int b){
                this->br=b;
            
            }
            ~Rect(){
                cout<<"destroying "<<endl;
            }
};


int main(){
    Rect r(23,89);
    cout<<r.area()<<" : area"<<endl;
    cout<<r.perimeter()<<" : perimeter "<<endl;
    


    return 0;

}