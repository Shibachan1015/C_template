#include <stdio.h>

typedef struct
{
    int apple;
    int orange;
    int banana;
} Fruits;

int main(void)
{
    Fruits store;
    store.apple = 100;
    printf("%d\n", store.apple);
    return 0;
}
