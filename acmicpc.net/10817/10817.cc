#include <cstdio>

int solution(int in[3]);

int main(void)
{
  int in[3]={0};
  scanf("%d %d %d", &in[0], &in[1] ,&in[2]);
  printf("%d\n", solution(in));
  return 0;
}


int solution(int in[3])
{
  for(int i=0;i<3;++i) {
    for(int j=i+1;j<3;++j) {
      if(in[i] > in[j]) {
        int t = in[i];
        in[i] = in[j];
        in[j] = t;
      }
    }
  }

  return in[1];
}
