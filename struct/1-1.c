#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("配列arrは[%d]です。\n", arr[i]);
    }
    return 0;
}
