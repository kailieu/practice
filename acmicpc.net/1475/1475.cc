#include <cstdio>

int main(void)
{
    char N[8] = {'\0'};
    int count[10] = {0};

    scanf("%s", N);
    int i = 0;
    while('\0' != N[i]) {
        count[N[i++]-'0'] += 1;
    }

    int t = count[6] + count[9];
    count[6] = count[9] = (t % 2 ? t/2+1 : t/2);

    int max = 0;
    for(int i=0;i<10;++i){
        if(max < count[i]) max = count[i];
    }
    printf("%d\n", max);

    return 0;
}
