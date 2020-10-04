#include "functions.h"

#include <vector>

// https://www.geeksforgeeks.org/counting-sort/
void counting_sort(std::vector<int> &arr)
{
  const int INPUT_RANGE_LIMIT = 21;

  std::vector<int> count(INPUT_RANGE_LIMIT + 1);

  // Store the counts of each item
  for(unsigned i = 0; i < arr.size(); ++i)
  {
    count[ arr[ i ] ]++;
  }

  // Update the running counts
  for(unsigned i = 1; i <= INPUT_RANGE_LIMIT; ++i)
  {
    count[ i ] += count[ i - 1 ];
  }

  int n = arr.size();
  std::vector<int> output(n);

  // Change count[i] so that count[i] now contains an actual
  // position of this input item in the output vector
  for(int i = n - 1; i >= 0; i--)
  {
    output[ count[ arr[ i ] ] - 1 ] = arr[ i ];
    --count[ arr[ i ] ];
  }

  // Transfer data back to original vector
  for(int i = 0; i < n; ++i)
  {
    arr[ i ] = output[ i ];
  }
}
