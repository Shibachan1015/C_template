#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int N, Q = 0;
    scanf("%d %d", &N, &Q);
    // printf("%d %d\n", N, Q);
    // printf("OK ✅\n\n");

    int *A = (int *)malloc(N * sizeof(int));
    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &A[i]);
        // printf("A[i] : %d\n", A[i]);
        // printf("OK ✅\n\n");
    }

    int L[100009] = {0}, R[100009] = {0};
    // int *guess_times = (int *)malloc(Q * sizeof(int));
    for (int i = 1; i <= Q; i++)
    {
        scanf("%d %d", &L[i], &R[i]);
        // printf("guess_times[i] : %d\n", i);
        // printf("guess_times : OK ✅\n\n");
        // printf("L : %d\nR : %d\n", L[i], R[i]);
        // printf("OK ✅\n\n");
    }

    int cumulative_sum[N + 1];
    cumulative_sum[0] = 0;
    for (int i = 1; i <= N; i++)
    {
        cumulative_sum[i] = cumulative_sum[i - 1] + A[i];
        // printf("累積和 : %d\n", cumulative_sum[i]);
        // printf("OK ✅\n\n");
    }
    for (int j = 1; j <= Q; j++)
    {
        // printf("R[j] : %d\nL[j] : %d\nL[j] - 1 : %d\n", cumulative_sum[R[j]], cumulative_sum[L[j]], cumulative_sum[L[j] - 1]);
        printf("%d\n", cumulative_sum[R[j]] - cumulative_sum[L[j] - 1]);
    }

    free(A);
    // free(guess_times);
    return 0;
}
