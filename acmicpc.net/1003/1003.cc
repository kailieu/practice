//
//  1003.cc
//  code_practice
//
//  Created by Jun Hee Yoo on 2017. 5. 6..
//  Copyright 2017 Jun Hee Yoo. All rights reserved.
//

#include <iostream>


void fibonacci(int n, int cache0[], int cache1[]);
void process(int N);


int main(int argc, const char * argv[]) {
  int T = 0;
  std::cin >> T;
  for(int i=0;i<T;++i) {
    int N = 0;
    std::cin >> N;
    process(N);
  }
}


void process(int N)
{
  int cache0[40] = {0};
  int cache1[40] = {0};
    
  fibonacci(N, cache0, cache1);
    
  std::cout << cache0[N] << ' ' << cache1[N] << std::endl;
}

void fibonacci(int n, int cache0[], int cache1[])
{
  if(n==0) {
    cache0[0] = 1;
    return;
  }else if (n==1) {
    cache1[1] = 1;
    return;
  }else{
    if(cache0[n-1] == 0 && cache1[n-1] == 0) {
      fibonacci(n-1, cache0, cache1);
    }
    if(cache0[n-2] == 0 && cache1[n-2] == 0) {
      fibonacci(n-2, cache0, cache1);
    }
    cache0[n] = cache0[n-1] + cache0[n-2];
    cache1[n] = cache1[n-1] + cache1[n-2];
  }
}
