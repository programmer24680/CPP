#include <stdio.h>
int main(void)
{
    int a, b, c;
    a = 1;

    scanf("%d", &c);
    b = a;
    while (a < c)
    {
        if ((c - a - b) % 2 == 1)
        {
            printf("%d %d %d\n", a, b, c);
        }
        a = a + 1;
    }
}