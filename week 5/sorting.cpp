// Step by step visualisation of sorting algorithms
#include <vector>
#include <string>
#include "sort.h"

using namespace std;

int main()
{
  vector<string> arr = {"Carol", "Linda", "Patty", "Bob", "Eddie", "Noah", "Kelly", "John", "Alice", "Mary", "Gina", "Dave", "Harry", "Fred", "Ophelia", "Ina"};
  Sort<string> sorter;
  sorter.bubbleSort(arr);
  sorter.mergeSort(arr);
  sorter.quickSort(arr);
  sorter.insertionSort(arr);
  sorter.selectionSort(arr);
  return 0;
}