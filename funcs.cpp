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

//----------------- task C -----------------

void gogeta(std::vector<int> &goku, std::vector<int> &vegeta)
{
  for (int i = 0; i < vegeta.size(); i++)
    goku.push_back(vegeta[i]);
  vegeta.clear();
}

//----------------- task D -----------------

std::vector<int> sumPairWise(const std::vector<int> &v1, const std::vector<int> &v2)
{
  std::vector<int> smaller, bigger, result;

  if (v1.size() >= v2.size())
  {
    bigger = v1;
    smaller = v2;
  }
  else
  {
    bigger = v2;
    smaller = v1;
  }

  for (int i = 0; i < bigger.size(); i++)
  {
    if (i >= smaller.size())
      result.push_back(bigger[i]);
    else
      result.push_back(bigger[i] + smaller[i]);
  }

  return result;
}
