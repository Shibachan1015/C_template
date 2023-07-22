/*  paiza D227: 引き落としの手数料
 *   2023/7/15
 */

#include <stdio.h>
#include <string.h>

#define BUF_SIZE (16)

int main(void)
{
    char buf[BUF_SIZE];
    int fee = 120;
    int ans = 0;
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%d", &ans);
    printf("%d\n", ans - fee);
    return 0;
}
