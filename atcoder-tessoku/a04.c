#include <stdio.h>

int main(void)
{
    int n = 0;
    scanf("%d", &n);
    for (int i = 9; i >= 0; i--)
    {
        int div = (1 << i);
        int result = (n / div) % 2;
        printf("%d", result);
    }

    printf("\n");
    return 0;
}
