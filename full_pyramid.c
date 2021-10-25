#include <stdio.h>
#include <math.h>

int main(void)
{
    /*
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
*/

    int n = 5;
    int max_stars = n * 2 - 1;

    for (int i = 1; i <= n; i++)
    {

        for (int s = 1; s <= max_stars - ((i * 2) - 1); s++)
        {
            printf(" ");
        }

        for (int j = 1; j <= i * 2 - 1; j++)
        {

            printf("* ");
        }

        printf("\n");
    }

    return 0;
}