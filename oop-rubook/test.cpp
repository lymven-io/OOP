#include <iostream>

using namespace std;

int main()
{
  int size;

  std::cin >> size;

  int *array = new int[size];

  delete[] array;

  return 0;
}