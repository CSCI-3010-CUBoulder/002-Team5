#include <iostream>
#include "UtilityFunctions.h"
using namespace std;

int main()
{
  std::vector<int> v = {1,2,3};
  std::cout <<"Old vector: ";
  for (int i=0; i<(int)v.size(); i++)
  {
    std::cout << v[i] << " ";
  }
  std::cout << endl << "New vector: ";
  v = VectorPlusN(5, v);
  for (int i=0; i<(int)v.size(); i++)
  {
    std::cout << v[i] << " ";
  }
  std::cout << endl;
  return 0;
}
