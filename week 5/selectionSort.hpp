#include <vector>
#include "sort.h"

using namespace std;

template <typename T>
void Sort<T>::swap(T &a, T &b)
{
  T temp = a;
  a = b;
  b = temp;
}

template <typename T>
void Sort<T>::selectionSortHelper(vector<T> &arr, int &step)
{
  int n = arr.size();
  for (int i = 0; i < n - 1; ++i)
  {
    int minIndex = i;
    for (int j = i + 1; j < n; ++j)
    {
      if (arr[j] < arr[minIndex])
      {
        minIndex = j;
      }
    }
    swap(arr[i], arr[minIndex]);
    printArray(arr, step);
    step++;
  }
}

template <typename T>
void Sort<T>::selectionSort(vector<T> &arr)
{
  int step = 1;
  cout << "SelectionSort steps:" << endl;
  printArray(arr, step);
  step++;
  selectionSortHelper(arr, step);
}