#include <cstdio>

int gcd(int a, int b)
{
  if(0 == a) return b;
  while(b) {
      if(a>b) a = a-b;
      else b = b-a;
  }
  return a;
}

int solution(int M, int N, int x, int y);

int main(void)
{
    int T=0,M=0,N=0,x=0,y=0;
    scanf("%d", &T);
    for(int i=0;i<T;++i) {
        scanf("%d %d %d %d", &M, &N, &x, &y);
        printf("%d\n", solution(M, N, x, y));
    }
    return 0;
}

int solution(int M, int N, int x, int y)
{
    int lcm = (M*N)/gcd(M, N);
    for(int i=0, candidate=i*M+x;lcm>=candidate;++i, candidate=i*M+x) {
        if(candidate % N == y || (candidate % N == 0 && N == y)) {
            return candidate;
        }
    }
    return -1;
}
