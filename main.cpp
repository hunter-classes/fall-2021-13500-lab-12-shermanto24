#include <iostream>
#include "funcs.h"

int main()
{
  //task A
  std::cout << "Task A\n" << '\n';

  std::vector<int> a = makeVector(5);
  std::cout << "Called makeVector(5): created vector a of size 5" << '\n';
  for (int i = 0; i < a.size(); i++)
    std::cout << "a[" << i << "] = " << a[i] << '\n';

  
}
