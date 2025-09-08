#pragma once
#include <vector>
#include <string>
#include <iostream>

using namespace std;

template <typename T>
class Sort
{
public:
  void quickSort(vector<T> &arr);
  void mergeSort(vector<T> &arr);
  void bubbleSort(vector<T> &arr);
  void insertionSort(vector<T> &arr);
  void selectionSort(vector<T> &arr);

private:
  int partition(vector<T> &arr, int low, int high, int &step);
  void quickSortHelper(vector<T> &arr, int low, int high, int &step);

  void mergeSortHelper(vector<T> &arr, int left, int right, int &step);
  void merge(vector<T> &arr, int left, int mid, int right, int &step);

  void bubbleSortHelper(vector<T> &arr, int &step);

  void insertionSortHelper(vector<T> &arr, int &step);

  void selectionSortHelper(vector<T> &arr, int &step);
  void swap(T &a, T &b);

  void printArray(const std::vector<T> &arr, int &step)
  {
    std::cout << "Step " << step << ": ";
    for (const T &element : arr)
    {
      std::cout << element << " ";
    }
    std::cout << std::endl;
  }
};

#include "quickSort.hpp"
#include "mergeSort.hpp"
#include "bubbleSort.hpp"
#include "insertionSort.hpp"
#include "selectionSort.hpp"