#include <vector>
#include "sort.h"

using namespace std;

template <typename T>
void Sort<T>::bubbleSortHelper(vector<T> &arr, int &step)
{
  bool isSwapped;
  int n = arr.size();
  for (int i = 0; i < n - 1; ++i)
  {
    isSwapped = false;
    for (int j = 0; j < n - i - 1; ++j)
    {
      if (arr[j] > arr[j + 1])
      {
        std::swap(arr[j], arr[j + 1]);
        isSwapped = true;
      }
    }
    if (!isSwapped)
      break;
    printArray(arr, step);
    step++;
  }
}

template <typename T>
void Sort<T>::bubbleSort(vector<T> &arr)
{
  int step = 1;
  cout << "BubbleSort steps:" << endl;
  printArray(arr, step);
  step++;
  bubbleSortHelper(arr, step);
}