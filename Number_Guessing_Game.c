#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, user_number, count = 0;
    srand(time(0));
    number = rand() % 100 + 1;
    printf("Guess The Number generated : ");

    do
    {
        scanf("%d", &user_number);
        if (user_number > number)
        {
            printf("A smaller number please !!\n");
        }
        else if (user_number < number)
        {
            printf("A Larger number please!!\n");
        }
        count++;
    } while (user_number != number);

    if (user_number == number)
    {
        printf("\n\n*****  YOU WON !!  *****\n\n");
        printf("\nCorrectly Guessed!! \n\nNumber is----> %d\n", number);
        printf("\nYou guessed the correct Number in %d attempts \n", count);
    }
    return 0;
}
