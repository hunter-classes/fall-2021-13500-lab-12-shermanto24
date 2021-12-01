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

  //task B
  std::cout << "\nTask B\n" << '\n';

  std::vector<int> b{1, 2, -1, 3, 4, -1, 6};
  std::cout << "b = {1, 2, -1, 3, 4, -1, 6}" << '\n';

  b = goodVibes(b);
  std::cout << "\nAfter calling goodVibes(b)" << '\n';
  std::cout << "b = {";
  for (int i = 0; i < b.size(); i++)
  {
    std::cout << b[i];
    if (b[i] == b.back())
      std::cout << "}" << '\n';
    else
      std::cout << ", ";
  }

  //task C
  std::cout << "\nTask C\n" << '\n';

  std::vector<int> c1{1, 2, 3};
  std::cout << "c1 = {1, 2, 3}" << '\n';
  std::vector<int> c2{4, 5};
  std::cout << "c2 = {4, 5}" << '\n';

  gogeta(c1, c2);
  std::cout << "\nAfter calling gogeta(c1, c2)" << '\n';
  std::cout << "c1 = {";
  for (int i = 0; i < c1.size(); i++)
  {
    std::cout << c1[i];
    if (c1[i] == c1.back())
      std::cout << "}" << '\n';
    else
      std::cout << ", ";
  }
  std::cout << "c2.empty() = " << c2.empty() << '\n';
}
