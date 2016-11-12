/*
 * 다음과 같은 형태의 배열을
 * [a1,a2,a3...,an,b1,b2...bn]
 * 다음과 같은 형태로 추가적인 공간을 사용하지 않고 바꾸시오.
 * [a1,b1,a2,b2.....an,bn]
 * */

#include <iostream>

void swap(int& a, int& b) {
  a = a ^ b; b = a ^ b; a = a ^ b;
}

const int L = 18;
int ints[L] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 13, 14, 15, 16, 17, 18, 19};

void recurse(int l, int r) {
  if(l <= 0 || r >= L-1) return;
  for(int i=l; i<r; i+=2) {
    swap(ints[i], ints[i+1]);
  }
  recurse(l-1, r+1);
}

int main(int argc, const char * argv[]) {
  int h = static_cast<int>(L/2);
  recurse(h-1, h);

  for(int i : ints) {
    std::cout << i << ' ';
  }
  std::cout << std::endl;

  return 0;
}
