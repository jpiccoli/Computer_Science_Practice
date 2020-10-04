#include "functions.h"

void radix_sort(std::vector<int> &vec, int max_digits)
{
  std::list<int> pockets[ 10 ];

  for(int i = 0; i < max_digits; ++i)
  {
    // Store in each pocket each element that has a digit for that pocket
    int m = static_cast<int>(pow(10, i + 1));
    int p = static_cast<int>(pow(10, i));
    std::cout << "m = " << m << " p = " << p << '\n';
    for(unsigned j = 0; j < vec.size(); ++j)
    {
      int temp = vec[ j ] % m;
      int index = temp / p;
      pockets[ index ].push_back(vec[ j ]);
    }
    int count = 0;

    for(int j = 0; j < 10; ++j)
    {
      // Debug
      //std::cout << "Pocket j = " << j << ": ";
      //for(auto const item : pockets[ j ])
      //  std::cout << item << " ";
      //std::cout << '\n';
      // Debug

      while(!pockets[ j ].empty())
      {
        vec[ count ] = *(pockets[ j ].begin());
        //std::cout << "count = " << count << ", vec[ count ] = " << vec[ count ] << '\n';
        pockets[ j ].erase(pockets[ j ].begin());
        count++;
      }
    }
  }
}
