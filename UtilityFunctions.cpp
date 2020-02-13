#include "UtilityFunctions.h"


std::vector <int> VectorTimes(std::vector <int> x, int mult){
  int size=x.size();
  for(int i=0; i<size; i++){
    x[i]*=mult;
  }

  return x;
}

std::vector<int> VectorPlusN(int n, std::vector<int> v)
{
  for (int i = 0; i<(int)v.size(); i++)
  {
    v[i] = v[i]+n;
  }
  return v;
}
