#include <iostream>

// C++14
auto f() noexcept 
{
  return "Hello world\n";
}

int main() 
{
  std::cout << f() << '\n';
}
