#include <iostream>
#include <cstdio>

int main(void)
{
  char ch = '\0';
  while (std::char_traits<char>::eof() != (ch = std::cin.get())) {
    std::cout << ch;
  }
  return 0;
}
