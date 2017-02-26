#include <cstdio>

int main(void)
{
    char input[100] = { 0 };
    scanf("%s", input);

    int idx = 1;
    while('\0' != input[idx-1]) {
        putchar(input[idx-1]);
        if(idx%10 == 0) {
            putchar('\n');
        }
        idx+=1;
    }
    putchar('\n');
}
