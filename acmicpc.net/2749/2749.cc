//
//  2749.cc
//  code_practice
//
//  Created by Jun Hee Yoo on 2017. 5. 6..
//  Copyright 2017 Jun Hee Yoo. All rights reserved.
//  Reference: https://www.acmicpc.net/blog/view/28
//

#include <iostream>

static const int MOD = 1000000;
static const int P = MOD/10*15;

int fib[P] = {0,1};

int main(void) {
  long long n;
  std::cin >> n;
  for (int i=2; i<P; i++) {
    fib[i] = fib[i-1] + fib[i-2];
    fib[i] %= MOD;
  }
  std::cout << fib[n%P] << std::endl;
  return 0;
}
