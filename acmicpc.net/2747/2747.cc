//
//  main.cpp
//  code_practice
//
//  Created by Jun Hee Yoo on 2017. 5. 6..
//  Copyright 2017 Jun Hee Yoo. All rights reserved.
//

#include <iostream>


static const int MAX_N = 45;

void fibonacci(int n, int cache[]);
void process(int N);


int main(int argc, const char * argv[]) {
  int N = 0;
  std::cin >> N;
  process(N);
}


void process(int N)
{
  int cache[MAX_N] = {0};
  fibonacci(N, cache);
  std::cout << cache[N] << std::endl;
}

void fibonacci(int n, int cache[])
{
  if(n==0) {
    cache[0] = 0;
  }else if (n==1) {
    cache[1] = 1;
  }else{
    if(cache[n-1] == 0) {
      fibonacci(n-1, cache);
    }
    if(cache[n-2] == 0) {
      fibonacci(n-2, cache);
    }
    cache[n] = cache[n-1] + cache[n-2];
  }
}
