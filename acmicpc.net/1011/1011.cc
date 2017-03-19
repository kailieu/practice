#include <cstdio>

inline int ABS(int val)
{
    int ret = 0;
    (val < 0 ? ret = -val : ret = val);
    return ret;
}

int recursive(int from_x, int from_y, int step_sz, int step_cnt)
{
    if(from_y <= from_x) {
        return step_cnt;
    }
    step_sz+=1;
    if(ABS(from_y - from_x) <= step_sz) {
        return step_cnt + 1;
    }
    return recursive(from_x+step_sz, from_y-step_sz, step_sz, step_cnt+2);
}

int main(void)
{
    int T = 0;
    scanf("%d", &T);
    for(int i = 0; i < T; ++i) {
        int X = 0, Y = 0;
        scanf("%d %d", &X, &Y);
        printf("%d\n", recursive(X, Y, 0, 0));
    }
        return 0;
}
