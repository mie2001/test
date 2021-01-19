#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int i;
    int x;
    srand(time(NULL));
    for (i = 0; i <= 10; i++)
    {
        printf("   %-3d\n", x = rand() % 100);
    }
    system("pause");
    return 0;
}