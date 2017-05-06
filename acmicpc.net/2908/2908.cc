//
//  2908.cc
//  code_practice
//
//  Created by Jun Hee Yoo on 2017. 5. 6..
//  Copyright 2017 Jun Hee Yoo. All rights reserved.
//

#include <iostream>


int process(int A, int B);
int reverse(int n);

int main(void)
{
  int A=0, B=0;
  std::cin >> A >> B;
  std::cout << process(A, B);
    
  return 0;
}


int process(int A, int B)
{
  A = reverse(A);
  B = reverse(B);
  return (A>B?A:B);
}

int reverse(int n)
{
  int d0 = n/100;
  n %= 100;
  //int d1 = n/10;
  int d2 = n % 10;
  int d1 = n-d2;
  return d2*100 + d1 + d0;
}
