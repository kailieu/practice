/*
   pingpong(x)의 함수를 작성하라. 예시의 인풋과 아웃풋은 다음과 같다.

   pingpong(8) = 6
   pingpong(22) = 0
   pingpong(68) = 2
   pingpong(100) = 2
   심화학습

   위 문제에 다음과 같은 제약을 추가하여 다시 풀어보자.

   For Loop 또는 Array를 쓰지 말 것
   Assignment를 쓰지 말 것, 즉, 변수 할당을 하지 말 것.
   String을 쓰지 말 것
   */

#include <iostream>

bool has7(int n) {
  if(n < 10) return (n == 7);

  if(n % 10 == 7) return true;
  else return has7(n / 10);
}

int diff(int n) {
  if(n <= 1) {
    return 1;
  }
  if(has7(n) || n % 7 == 0) {
    return -diff(n-1);
  }else{
    return diff(n-1);
  }
}

int pingpong(int n) {
  if(n <= 1) {
    return 1;
  }
  return pingpong(n-1) + diff(n-1);
}

int main(int argc, const char * argv[]) {
  std::cout << pingpong(8) << std::endl;
  std::cout << pingpong(22) << std::endl;
  std::cout << pingpong(68) << std::endl;
  std::cout << pingpong(100) << std::endl;
  std::cout << pingpong(1000) << std::endl;
}
