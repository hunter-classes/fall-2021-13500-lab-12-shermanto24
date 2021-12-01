#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

//----------------- task A -----------------

TEST_CASE("makeVector tests")
{
  std::vector<int> v = makeVector(10);
  CHECK(v.size() == 10);

  for (int i = 0; i < v.size(); i++)
    CHECK(v[i] == i);

  v = makeVector(0);
  CHECK(v.empty());

  v = makeVector(-5);
  CHECK(v.empty());
}

//----------------- task B -----------------

TEST_CASE("goodVibes tests")
{
  std::vector<int> v1{0, 1, -1, 2, -2, 3, -3};
  v1 = goodVibes(v1);
  std::vector<int> v2{1, 2, 3};
  for (int i = 0; i < v1.size(); i++)
    CHECK(v1[i] == v2[i]);

  std::vector<int> v3{-10, -20, -30};
  v3 = goodVibes(v3);
  CHECK(v3.empty());
}

//----------------- task C -----------------

TEST_CASE("gogeta tests")
{
  std::vector<int> v1{-3, -2, -1};
  std::vector<int> v2{0, 1, 2, 3};
  gogeta(v1, v2);

  std::vector<int> combo12{-3, -2, -1, 0, 1, 2, 3};
  for (int i = 0; i < v1.size(); i++)
    CHECK(v1[i] == combo12[i]);
  CHECK(v2.empty());

  std::vector<int> v3{4, 5, 6};
  gogeta(v1, v3);

  std::vector<int> combo13{-3, -2, -1, 0, 1, 2, 3, 4, 5, 6};
  for (int i = 0; i < v1.size(); i++)
    CHECK(v1[i] == combo13[i]);
  CHECK(v3.empty());
}

//----------------- task D -----------------

TEST_CASE("sumPairWise tests")
{
  //first vector passed is bigger
  std::vector<int> v1{2, 4, 3};
  std::vector<int> v2{-1, -2};
  std::vector<int> sum12 = sumPairWise(v1, v2);
  std::vector<int> correct_sum12 = {1, 2, 3};

  for (int i = 0; i < sum12.size(); i++)
    CHECK(sum12[i] == correct_sum12[i]);

  //second vector passed is bigger
  std::vector<int> v3{4, 4, 1};
  std::vector<int> sum23 = sumPairWise(v2, v3);
  std::vector<int> correct_sum23 = {3, 2, 1};

  for (int i = 0; i < sum23.size(); i++)
    CHECK(sum23[i] == correct_sum23[i]);

  //vectors have equal sizes
  std::vector<int> sum13 = sumPairWise(v1, v3);
  std::vector<int> correct_sum13 = {6, 8, 4};

  for (int i = 0; i < sum13.size(); i++)
    CHECK(sum13[i] == correct_sum13[i]);
}
