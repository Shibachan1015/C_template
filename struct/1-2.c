#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int year;
    char name[64];
    double weight;
    double height;
} Tarou, Hanako;

int main(void)
{
    Tarou.year = 10;
    Hanako.year = 12;
    printf("Tarouの年齢 : %d\n", Tarou.year);
    printf("Hanakoの年齢 : %d\n", Hanako.year);
    return 0;
}
