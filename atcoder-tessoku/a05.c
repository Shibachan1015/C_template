#include <stdio.h>

int main(void)
{
    int n, k, result = 0;
    scanf("%d %d", &n, &k);
    for (int red = 1; red <= n; red++)
    {
        for (int blue = 1; blue <= n; blue++)
        {
            int white = k - red - blue;
            /* printf("red: %d\n", red);
            printf("blue: %d\n", blue);
            printf("white: %d\n", white);
            if (red + blue + white == k)
            {
                printf("OK ✅\n");
            }
            */
            if (white >= 1 && white <= n)
            {
                result += 1;
                // printf("result: %d ✅\n\n", result);
            }
        }
    }
    printf("%d\n", result);
    return 0;
}
