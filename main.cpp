#include <iostream>
#include "UtilityFunctions.h"

int main() {
  std::vector<int> v{1,2,3,4,5};
  std::cout << "The old vector is: ";
  for(int i=0; i<5; i++){
    std::cout << v[i] << ' ';
  }
  std::cout << "" << '\n';
  std::cout << "The new vector is: ";
  std::vector<int> v_new=VectorTimes(v,5);
  for(int i=0; i<5; i++){
    std::cout << v_new[i] << ' ';
  }
  std::cout << "" << '\n';

  std::vector<int> v = {1,2,3};
  cout <<"Old vector: ";
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
