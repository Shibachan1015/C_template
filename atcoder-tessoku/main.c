#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int N, Q = 0;
    scanf("%d %d", &N, &Q);
    int *A = (int *)malloc(N * sizeof(int));
    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &A[i]);
    }
    int L[100009] = {0}, R[100009] = {0};
    for (int i = 1; i <= Q; i++)
    {
        scanf("%d %d", &L[i], &R[i]);
    }
    int cumulative_sum[N + 1];
    cumulative_sum[0] = 0;
    for (int i = 1; i <= N; i++)
    {
        cumulative_sum[i] = cumulative_sum[i - 1] + A[i];
    }
    for (int j = 1; j <= Q; j++)
    {
        printf("%d\n", cumulative_sum[R[j]] - cumulative_sum[L[j] - 1]);
    }
    free(A);
    return 0;
}
