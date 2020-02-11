#include <iostream>
#include "UtilityFunctions.h"


int int main() {
  std::vector<int> v{1,2,3,4,5};

  VectorTimes(v,5);
  for(int i=0; i<5; i++){
    std::cout << v[i] << ' ';
  }
}
