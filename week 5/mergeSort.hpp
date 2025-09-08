#include <vector>
#include "sort.h"

using namespace std;

template <typename T>
void Sort<T>::merge(vector<T> &arr, int left, int mid, int right, int &step)
{
  int size1 = mid - left + 1;
  int size2 = right - mid;

  // Create temporary arrays
  vector<T> leftArr(size1), rightArr(size2);

  // Copy data to temporary arrays
  for (int i = 0; i < size1; i++)
  {
    leftArr[i] = arr[left + i];
  }
  for (int i = 0; i < size2; i++)
  {
    rightArr[i] = arr[mid + 1 + i];
  }

  // Merge the temporary arrays back into arr[left..right]
  int i = 0, j = 0, k = left;
  while (i < size1 && j < size2)
  {
    if (leftArr[i] <= rightArr[j])
    {
      arr[k] = leftArr[i];
      i++;
    }
    else
    {
      arr[k] = rightArr[j];
      j++;
    }
    k++;
  }

  // Copy the remaining elements of leftArr[], if any
  while (i < size1)
  {
    arr[k] = leftArr[i];
    i++;
    k++;
  }

  // Copy the remaining elements of rightArr[], if any
  while (j < size2)
  {
    arr[k] = rightArr[j];
    j++;
    k++;
  }
}

template <typename T>
void Sort<T>::mergeSortHelper(vector<T> &arr, int left, int right, int &step)
{
  if (left >= right)
    return;

  int mid = left + (right - left) / 2;
  mergeSortHelper(arr, left, mid, step);
  mergeSortHelper(arr, mid + 1, right, step);
  merge(arr, left, mid, right, step);
  printArray(arr, step);
  step++;
}

template <typename T>
void Sort<T>::mergeSort(vector<T> &arr)
{
  int step = 1;
  cout << "MergeSort steps:" << endl;
  printArray(arr, step);
  step++;
  mergeSortHelper(arr, 0, arr.size() - 1, step);
}