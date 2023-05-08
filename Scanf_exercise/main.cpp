#include <iostream>

using namespace std;

int main()
{
    int i;

    for (i = 1; i <= 10; i++)
        {
            printf("%2d  x %2d = %2d\t\t| %2d  x %2d = %2d\n", 2, 0 + i, 2*i, 3, 0 + i, 3*i);

        }
    printf("\n\n__________________________________________________\n");
    for (i = 1; i <= 10; i++)
        {
            printf("%2d  x %2d = %2d\t\t| %2d  x %2d = %2d\n", 4, 0 + i, 4*i, 5, 0 + i, 5*i);

        }
    printf("\n\n__________________________________________________\n");
    int x = 1;
    while( x <=10){
        printf("%2d  x %2d = %2d\t\t| %2d  x %2d = %2d\n", 6, 0 + x, 6*x, 7, 0 + x, 7*x);
        x++;
    }
    return 0;
}
