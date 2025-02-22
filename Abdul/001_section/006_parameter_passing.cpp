#include <iostream>

using namespace std;

void swap_value(int a, int b)
{
    int temp = 0;
    temp = a;
    a = b;
    b = temp;
    cout << a << endl;
    cout << b << endl;
}

void swap_addr(int *a, int *b)
{

    int *temp;
    temp = a;
    a = b;
    b = temp;
    cout << *a << endl;
    cout << *b << endl;
}

void swap_ref(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << a << endl;
    cout << b << endl;
}

int main()
{
    swap_value(23, 890);
    int x = 24;
    int y = 89;
    cout << endl;
    swap_addr(&x, &y);

    cout << endl;

    swap_ref(x, y);
}