#include <cstdio>

void recursive(int N, int sum, int level)
{
    if((sum + level) >= N) {
        int a = N - sum;
        int b = level - a + 1;
        if (level % 2 == 0) {
            printf("%d/%d\n", a, b);
        }else{
            printf("%d/%d\n", b, a);
        }
    }else{
        recursive(N, sum + level, level+1);
    }
}

int main(void)
{
    int N = 0;
    scanf("%d", &N);

    recursive(N, 0, 1);

    return 0;
}
