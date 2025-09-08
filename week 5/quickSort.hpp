#include <vector>
#include <iostream>
#include "sort.h"

using namespace std;

template <typename T>
int Sort<T>::partition(vector<T> &arr, int low, int high, int &step)
{
  T pivot = arr[low];
  int i = low + 1;
  int j = high;

  while (i < j)
  {
    while (i <= high && arr[i] <= pivot)
      i++;
    while (j >= low && arr[j] > pivot)
      j--;
    if (i < j)
      std::swap(arr[i], arr[j]);
  }

  std::swap(arr[low], arr[j]);
  printArray(arr, step);
  step++;
  return j;
}

template <typename T>
void Sort<T>::quickSortHelper(vector<T> &arr, int low, int high, int &step)
{
  if (low < high)
  {
    int pi = partition(arr, low, high, step);
    quickSortHelper(arr, low, pi - 1, step);
    quickSortHelper(arr, pi + 1, high, step);
  }
}

template <typename T>
void Sort<T>::quickSort(vector<T> &arr) {
  int step = 1;
  cout << "QuickSort steps:" << endl;
  printArray(arr, step);
  step++;
  quickSortHelper(arr, 0, arr.size() - 1, step);
}