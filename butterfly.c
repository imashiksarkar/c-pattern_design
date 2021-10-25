#include <stdio.h>
#include <math.h>

int star_printing_func(int number_of_stars)
{
    for (int star = 1; star <= number_of_stars; star++)
    {
        printf("*");
    }
    return 0;
}

int main(void)
{
    int n = 11,
        number_of_stars = 1,
        number_of_spaces = n - 1,
        break_point = (int)ceil((float)n / (float)2);

    for (int i = 1; i <= n; i++)

    {
        star_printing_func(number_of_stars);

        for (int s = 1; s <= number_of_spaces; s++)
        {
            printf(" ");
        }

        star_printing_func(number_of_stars);

        if (i < break_point)
        {
            number_of_stars++;
            number_of_spaces -= 2;
        }
        else
        {
            number_of_stars--;
            number_of_spaces += 2;
        }

        printf("\n");
    }

    return 0;
}
