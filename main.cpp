// Computer_Science_Practice.cpp : Defines the entry point for the console application.
//

#include "functions.h"

#include <iostream>
#include <sstream>

int main()
{
  std::cout << "+++++++++++++++++++++++++\n";
  std::cout << "Computer Science Practice\n";
  std::cout << "+++++++++++++++++++++++++\n";
  std::cout << '\n';

  // Completed: 10/04/2020
  std::cout << "================\n";
  std::cout << "Counting Sort\n";
  std::cout << "================\n";

  std::vector<int> arr = { 1, 4, 1, 2, 7, 5, 2, 9, 11, 13, 11, 16, 17, 16, 18, 20, 18 };
  std::cout << "-------------\n";
  std::cout << "Initial list:\n";
  std::cout << "-------------\n";
  for(auto item : arr)
    std::cout << item << " ";
  std::cout << '\n';

  counting_sort(arr);

  std::cout << "-------------\n";
  std::cout << "Sorted list:\n";
  std::cout << "-------------\n";
  for(auto item : arr)
    std::cout << item << " ";
  std::cout << "\n\n";

  // Completed: 10/04/2020
  std::cout << "================\n";
  std::cout << "Radix Sort\n";
  std::cout << "================\n";
  std::vector<int> arr1 = { 802, 630, 20, 745, 52, 300, 612, 932, 78, 187 };
  std::cout << "-------------\n";
  std::cout << "Initial list:\n";
  std::cout << "-------------\n";
  for(auto item : arr1)
    std::cout << item << " ";
  std::cout << '\n';

  radix_sort(arr1, 3);

  std::cout << "-------------\n";
  std::cout << "Sorted list:\n";
  std::cout << "-------------\n";
  for(auto item : arr1)
    std::cout << item << " ";
  std::cout << "\n\n";

  std::cout << "==================\n";
  std::cout << "Chessbaord Squares\n";
  std::cout << "==================\n";
  chessboard_squares();

  std::cout << '\n';

  std::cout << "==================\n";
  std::cout << "Mergesort\n";
  std::cout << "==================\n";
  std::cout << '\n';

  std::cout << "==================\n";
  std::cout << "Heapsort\n";
  std::cout << "==================\n";
  std::cout << '\n';

  std::cout << "==================\n";
  std::cout << "Quicksort\n";
  std::cout << "==================\n";
  std::cout << '\n';

  return 0;
}

