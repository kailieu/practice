#include <cstdio>
#include <cstring>

int main(void)
{
    int len = 0;
    char num[100] = { 0 };

    scanf("%d %s", &len, num);

    int sum = 0;
    for(int i = 0; i < len; ++i) {
        sum += num[i] - 48;
    }

    printf("%d\n", sum);

    return 0;
}
