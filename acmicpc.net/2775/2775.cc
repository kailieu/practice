#include <cstdio>

void solution(int K, int N);

int main(void)
{
  int T=0,K=0,N=0;
  scanf("%d", &T);
  for(int i=0;i<T;++i) {
    scanf("%d %d", &K, &N);
    solution(K, N);
  }
  return 0;
}


void solution(int K, int N)
{
  //       K   N
  int APT[15][14] = {
    /* 0 floor */  {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14},
    /* 1 floor */  {0}
  };

  for(int i=1;i<K+1;++i) {
    int sum = 0;
    for(int j=0;j<N;++j) {
      sum = sum+APT[i-1][j];
      APT[i][j] = sum;
    }
  }

  printf("%d\n", APT[K][N-1]);
}
