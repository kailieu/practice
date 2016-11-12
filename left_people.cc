/*
   A사무실에는 특정일자의 출퇴근 시간이 기록된 거대한 로그파일이 있다고 한다.

   파일의 형식은 다음과 같다. (한 라인에서 앞부분은 출근시간(HH:MM:SS), 뒷부분은 퇴근시간이다)

09:12:23 11:14:35
10:34:01 13:23:40
10:34:31 11:20:10
특정시간을 입력(예:11:05:20)으로 주었을 때 그 시간에 총 몇 명이 사무실에 있었는지 알려주는 함수를 작성하시오.

1차: http://www.careercup.com/question?id=13817668
2차: http://codingdojang.com/scode/418
*/

#include <iostream>
#include <map>
#include <string>
#include <cassert>
#include <iterator>


int convert(const std::string& time) {
  // assume time is described by fixed format "hh:mm:ss"
  std::string hour = time.substr(0, 2);
  std::string min = time.substr(3, 2);
  std::string sec = time.substr(6, 2);
  return (std::stoi(hour)*3600 + std::stoi(min)*60 + std::stoi(sec));
}

void test_convert() {
  std::cout << (convert("00:00:00") == 0) << std::endl;
  std::cout << (convert("00:00:01") == 1) << std::endl;
  std::cout << (convert("00:01:00") == 60) << std::endl;
  std::cout << (convert("01:00:00") == 3600) << std::endl;
  std::cout << (convert("25:00:00") == 3600 * 25) << std::endl;
}

int main(int argc, const char * argv[]) {
  std::map<int, int> attend; // time stamp
  std::map<int, int> leave; // time stamp

  std::string time;

  int N = 0;
  std::cin >> N;
  for(int i=0; i<N; ++i) {
    std::cin >> time;
    int t = convert(time);
    if(attend.find(t) == attend.end()) {
      attend.emplace(t, 1);
    }else{
      attend.at(t) += 1;
    }

    std::cin >> time;
    t = convert(time);
    if(leave.find(t) == leave.end()) {
      leave.emplace(t, 1);
    }else{
      leave.at(t) += 1;
    }
  }

  std::cin >> time;
  int t = convert(time);
  int sum = 0;
  std::map<int, int>::iterator l, r;
  l = attend.lower_bound(t);
  for(auto i=attend.begin(); i != l; ++i) {
    sum += i->second;
  }

  r = leave.lower_bound(t);
  for(auto i=leave.begin(); i != r; ++i) {
    sum -= i->second;
  }

  std::cout << sum << std::endl;
}
