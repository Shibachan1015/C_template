#include <stdio.h>
#include <stdlib.h>

struct Fruits
{
    int apple;
    int orange;
    int banana;
};

int main(void)
{
    struct Fruits store1 = {100, 200, 300};
    struct Fruits store2 = {200, 400, 500};
    struct Fruits store3;
    store3 = store1;

    printf("s1リンゴの金額 : %d\n", store1.apple);
    printf("s1オレンジの金額 : %d\n", store1.orange);
    printf("s1バナナの金額 : %d\n", store1.banana);

    printf("s2リンゴの金額 : %d\n", store2.apple);
    printf("s2オレンジの金額 : %d\n", store2.orange);
    printf("s2バナナの金額 : %d\n", store2.banana);

    printf("s3リンゴの金額 : %d\n", store3.apple);
    printf("s3オレンジの金額 : %d\n", store3.orange);
    printf("s3バナナの金額 : %d\n", store3.banana);

    return 0;
}
