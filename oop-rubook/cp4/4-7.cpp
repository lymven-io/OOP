#include <iostream>

using namespace std;

class MyObj
{
    int width;
    int height;

  public:
    MyObj()
    {
        width = height = 0;
    }
    void setD(int *p, int *q)
    {
        ++*p;
        ++*q;
        width = *p;
        height = *q;
        p = new int(1);
        q = new int(2);
    }
    void setE(int *&r, int *&s)
    {
        ++*r;
        ++*s;
        width = *r;
        height = *s;
        r = new int(1);
        s = new int(2);
    }
    void show()
    {
        cout << "width=" << width << " height=" << height << endl;
    }
};

int main()
{
    MyObj k;
    int *m = new int(3);
    int *n = new int(4);

    cout << "address before setD():" << endl;
    cout << "&m=" << m << endl;
    cout << "&n=" << n << endl;
    k.setD(m, n);
    k.show();
    cout << "m=" << *m << " n=" << *n << endl
         << endl;

    cout << "address after setD():" << endl;
    cout << "&m=" << m << endl;
    cout << "&n=" << n << endl;

    cout << "--------------" << endl
         << endl;

    cout << "address before setE():" << endl;
    cout << "&m=" << m << endl;
    cout << "&n=" << n << endl
         << endl;

    k.setE(m, n);
    k.show();

    cout << "m=" << *m << " n=" << *n << endl
         << endl;
    cout << "address after setE():" << endl;
    cout << "&m=" << m << endl;
    cout << "&n=" << n << endl
         << endl;
}