/*
 * 1차 출처: https://brunch.co.kr/@sunghokimnxag/5
 * 2차 출처: http://codingdojang.com/scode/514
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
