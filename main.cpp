#include <iostream>

auto f() noexcept {
  return "Hello world\n";
}

int main() {
  std::cout << f();
}
