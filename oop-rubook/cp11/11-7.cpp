#include <iostream>

using namespace std;

template <class T>
class Vector
{
    T *dataVector;
    int sizeVector;

  public:
    Vector()
    {
        dataVector = 0;
        sizeVector = 0;
    }
    Vector(int i)
    {
        sizeVector = i;
        dataVector = new T[sizeVector];
    }
    ~Vector()
    {
        delete[] dataVector;
    }
    T &operator[](int i)
    {
        return dataVector[i];
    }
    Vector<T> &operator=(Vector<T> &v)
    {
        if (sizeVector != v.sizeVector)
        {
            sizeVector = v.sizeVector;
            delete[] dataVector;
            dataVector = new T[sizeVector];
        }
        for (int i = 0; i++; i < sizeVector)
            dataVector[i] = v.dataVector[i];
        return *this;
    }
    int getSize()
    {
        return sizeVector;
    }
};

template <class T>
class Mathix
{
    Vector<Vector<T> *> row;

  public:
    Mathix(int r, int c) : row(r)
    {
        for (int i = 0; i < r; i++)
        {
            row[i] = new Vector<T>(c);
        }
    }
    ~Mathix()
    {
        for (int i = 0; i < row.getSize(); i++)
            delete row[i];
    }
    Vector<T> &operator[](int i)
    {
        return *row[i];
    }
    int getRow()
    {
        return row.getSize();
    }
    int getColumn()
    {
        return row[0]->getSize();
    }
    void print(ostream &os)
    {
        for (int i = 0; i < getRow(); i++)
        {
            for (int j = 0; j < getColumn(); j++)
                os << (*row[i])[j] << " ";
            cout << endl;
        }
    }
};

template <class T>
ostream &operator<<(ostream &os, Mathix<T> &m)
{
    m.print(os);
    return os;
}

int main()
{
    Mathix<int> a(3, 4);
    for (int i = 0, k = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
            a[i][j] = k++;
    cout << a << endl;

    Mathix<char> b(3, 4);
    char k = 'a';
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
            b[i][j] = k++;
    cout << b << endl;
    return 0;
}