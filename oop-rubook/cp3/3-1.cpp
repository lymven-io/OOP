#include <iostream>

using namespace std;

class MyObj
{
  private:
    int width;
    int height;
    float price;

  public:
    void setObj();
    void showObj();
};

void MyObj::setObj()
{
    cout << "Enter width: ";
    cin >> width;
    cout << "Enter heidht: ";
    cin >> height;
    cout << "Enter price: ";
    cin >> price;
}

void MyObj::showObj()
{
    cout << "Width = " << width << endl;
    cout << "Height = " << height << endl;
    cout << "Price = " << price << endl;
}

int main()
{
    int max;
    cout << "How many object?" << endl;
    cin >> max;

    MyObj mobile[max];

    for (int i = 0; i < max; i++)
    {
        cout << "Object no." << i + 1 << endl;
        mobile[i].setObj();
    }

    cout << "--Show results--" << endl;
    for (int j = 0; j < max; j++)
    {
        cout << "Show object no." << j + 1 << endl;
        mobile[j].showObj();
    }
}