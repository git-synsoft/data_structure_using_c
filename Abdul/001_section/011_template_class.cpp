#include <iostream>

using namespace std;

template <class T>
class Rect
{
    T len;
    T br;

public:
    Rect(T l, T b)
    {
        this->len = l;
        this->br = b;
    }
    T area()
    {
        return len * br;
    }
    T perimeter()
    {
        return 2 * (len + br);
    }
    void setLength(T l)
    {
        this->len = l;
    }
    void setBreadth(T b)
    {
        this->br = b;
    }
    ~Rect()
    {
        cout << "destroying " << endl;
    }
};

int main()
{

    Rect<float> ar(34.89, 23.78);
    cout << ar.area() << " : area " << endl;
}
