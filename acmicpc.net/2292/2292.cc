#include <cstdio>

int recurse(int N, int sum, int level)
{
  if(sum >= N) {
      return level+1;
  }
  level += 1;
  return recurse(N, sum + (level*6), level);
}

int main(void)
{
    int N = 0;
    scanf("%d", &N);

    //1, 6, 12, 18, 24
    //1  7  19  37  61
    printf("%d\n", recurse(N, 1, 0));

    return 0;
}
