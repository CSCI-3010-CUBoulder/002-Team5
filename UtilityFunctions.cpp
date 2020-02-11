#include <iostream>
#include <cmath>
#include <vector>
#include "UtilityFunctions.h"
using namespace std;

vector<int> VectorPlusN(int n, vector<int> v)
{
  for (int i = 0; i<(int)v.size(); i++)
  {
    v[i] = v[i]+n;
  }
  return v;
}
