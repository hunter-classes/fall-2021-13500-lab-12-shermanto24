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
}
