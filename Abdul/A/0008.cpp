

#include <iostream>

using namespace std;

class Rect
{
    int len;
    int br;

public:
    Rect(int l, int b)
    {
        this->len = l;
        this->br = b;
    }

    int area()
    {
        return len * br;
    }

    void change_len(int l)
    {
        this->len = l;
    }

    void change_br(int b)
    {
        this->br = b;
    }

    ~Rect(){
        
        cout<<"destructor"<<endl;

    }
};

int main()
{
    Rect r(34, 45);
    cout << r.area() << endl;
}