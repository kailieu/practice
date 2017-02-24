#include <stdio.h>

int main(void)
{
    int N = 0;
    scanf("%d", &N);
    for(int i=1; i<=N;++i) {
        for(int j=N-i;j>0;--j) {
            printf(" ");
        }
        for(int k=1;k<=i;++k) {
            printf("*");
        }
        printf("\n");
    }
}
