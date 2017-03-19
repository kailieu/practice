#include <cstdio>

void solution(int H, int W, int N);

int main(void)
{
    int T =0 ;
    scanf("%d", &T);

    for(int i=0;i<T;++i) {
        int H=0,W=0,N=0;
        scanf("%d %d %d", &H, &W, &N);
        solution(H, W, N);
    }

    return 0;
}


void solution(int H, int W, int N)
{
    int F = (N % H);
    F = (F == 0 ? H : F);
    int R = static_cast<int>((N-F) / H)+1;
    printf("%d%02d\n", F, R);
}
