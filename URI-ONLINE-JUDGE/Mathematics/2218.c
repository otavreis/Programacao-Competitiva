#include <stdio.h>

int main()
{

    int a, n ,i;

    scanf("%d", &n);
    for(i=0; i<n;i++)
    {
        scanf("%d", &a);
        a = (a*a + a)/2 + 1;
        printf("%d\n", a);
    }

    return 0;
}