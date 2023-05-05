#include <stdio.h>
void tinh(int n, int *s)
{
    int i;
    *s = 0;
    for (i = 1; i < n + 1; i++)
    {
        *s = *s + i;
    }
}
int main()
{
    int n, s;
    n = 10;
    tinh(n, &s);
    printf("%d\n", s);
    return 0;
}

void tinhtong(){
    // code
}