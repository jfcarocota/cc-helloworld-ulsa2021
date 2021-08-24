#include<iostream>
#include "MyHeader.hh"

int main()
{
  std::cout << "Suma: " << Add(1, 2) << std::endl;
  std::cout << "Suma: " << Add(1.f, 2.5f) << std::endl;
  std::cout << "Suma: " << Add("Hello", "World!") << std::endl;
  std::cin.get();
  return 0;
}