#include "UtilityFunctions.h"


std::vector <int> VectorTimes(std::vector <int> x, int mult){
  int size=x.size();
  for(int i=0; i<size; i++){
    x[i]*=mult;
  }

  return x;
}
