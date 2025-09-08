#include <vector>
#include "sort.h"

using namespace std;

template <typename T>
void Sort<T>::insertionSortHelper(vector<T> &arr, int &step)
{
  int n = arr.size();
  for (int i = 1; i < n; ++i)
  {
    T key = arr[i];
    int j = i - 1;
    while (j >= 0 && arr[j] > key)
    {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key;
    printArray(arr, step);
    step++;
  }
}

template <typename T>
void Sort<T>::insertionSort(vector<T> &arr)
{
  int step = 1;
  cout << "InsertionSort steps:" << endl;
  printArray(arr, step);
  step++;
  insertionSortHelper(arr, step);
}