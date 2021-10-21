#include <stdio.h>

int main(void)
{
    int number_of_rows;

    printf("Enter the size of the Pyramid - \n");

    scanf("%d", &number_of_rows);

    // int lower_line_count = (number_of_rows / 2) - 1;

    int number_of_spaces = number_of_rows * 2 - 2;

    for (int i = 1; i <= number_of_rows; i++)
    {
        for (int s = 0; s < number_of_spaces; s++)
        {
            printf(" ");
        }
        // printf("%d", (number_of_rows - (number_of_rows % 2)) / 2 + 1);
        (number_of_rows % 2 == 0) ? printf("%d %d", number_of_rows / 2, number_of_rows / 2 + 1) : printf("%d", (number_of_rows - (number_of_rows % 2)) / 2 + 1);

        number_of_spaces -= 2;
        for (int j = 0; j < (i * 2 - 1); j++)
        {
            printf("* ");
        }

        // if (i < 5)
        // {
        //     number_of_spaces -= 2;
        // }
        // else
        // {
        //     number_of_spaces += 2;
        // }

        // if (i <= number_of_rows)
        // {
        //     for (int j = 0; j < (i * 2 - 1); j++)
        //     {
        //         printf("* ");
        //     }
        // }
        // else
        // {
        //     for (int l = 0; l < i * 2 - lower_line_count; l++)
        //     {
        //         printf("* ");
        //     }
        //     lower_line_count += 4;
        // }
        printf("\n");
    }

    return 0;
}

/*

        *               -> 1 * 2 - 1  = 1
      * * *             -> 2 * 2 - 1  = 3
    * * * * *           -> 3 * 2 - 1  = 5
  * * * * * * *         -> 4 * 2 - 1  = 7
* * * * * * * * *       -> 5 * 2 - 1  = 9
  * * * * * * *         -> 6 * 2 - 5  = 7
    * * * * *           -> 7 * 2 - 9  = 5
      * * *             -> 8 * 2 - 13 = 3
        *               -> 9 * 2 - 17 = 1


4---6 = 6 - 2
3---7 = 7 - 4
1---8 = 9 - 8

*/