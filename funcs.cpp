#include <iostream>
#include "funcs.h"

//----------------- task A -----------------

std::vector<int> makeVector(int n)
{
  std::vector<int> v;
  for (int i = 0; i < n; i++)
    v.push_back(i);
  return v;
}

//----------------- task B -----------------

std::vector<int> goodVibes(const std::vector<int> &v)
{
  std::vector<int> result;
  for (int i = 0; i < v.size(); i++)
    if (v[i] > 0)
      result.push_back(v[i]);
  return result;
}
