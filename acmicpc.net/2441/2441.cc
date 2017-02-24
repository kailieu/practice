#include <stdio.h>

int main(void)
{
    int N = 0;
    scanf("%d", &N);

    for(int i=N;i>0;--i) {
        for(int k=N-i;k>0;--k) {
            printf(" ");
        }
        for(int j=i;j>0;--j) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
