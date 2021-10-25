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
    /*
    int n = 5;
    int max_stars = n * 2 - 1; // 5 * 2 - 1 = 9

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
*/

    /*
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
    */

    int n = 9;
    int number_of_spaces_to_print = ((int)ceil((float)n / (float)2) * 2 - 2);
    int number_of_stars_to_print = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int s = 1; s <= number_of_spaces_to_print; s++)
        {

            printf(" ");
        }

        for (int j = 1; j <= number_of_stars_to_print; j++)
        {

            printf("* ");
        }

        if (i <= n / 2)
        {
            number_of_spaces_to_print -= 2;
            number_of_stars_to_print += 2;
        }
        else
        {
            number_of_spaces_to_print += 2;
            number_of_stars_to_print -= 2;
        }

        printf("\n");
    }

    return 0;
}