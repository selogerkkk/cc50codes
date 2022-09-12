#include <stdio.h>

int get_cents()
{
    int cents;
    do
    {
        printf("Amount of change due: ");
        scanf("%d", &cents);
        if (cents <= 0)
        {
            printf("Amount cannot be negative or zero. Try again.\n");
        }
    } while (cents < 0);

    return cents;
}

int calculate_quarters(int cents)
{
    int quarters = 0;
    while (cents >= 25)
    {
        cents -= 25;
        quarters++;
    }
    return quarters;
}

int calculate_dimes(int cents)
{
    int dimes = 0;
    while (cents >= 10)
    {
        cents -= 10;
        dimes++;
    }
    return dimes;
}

int calculate_nickels(int cents)
{
    int nickels = 0;
    while (cents >= 5)
    {
        cents -= 5;
        nickels++;
    }
    return nickels;
}

int calculate_pennies(int cents)
{
    int pennies = 0;
    while (cents >= 1)
    {
        cents -= 1;
        pennies++;
    }
    return pennies;
}
int main()
{
    int cents = get_cents();

    int quarters = calculate_quarters(cents);
    cents -= quarters * 25;
    int dimes = calculate_dimes(cents);
    cents -= dimes * 10;
    int nickels = calculate_nickels(cents);
    cents -= nickels * 5;
    int pennies = calculate_pennies(cents);
    cents -= pennies * 1;

    if (quarters > 0)
    {
        printf("Amount of quarters: %d\n", quarters);
    }
    if (dimes > 0)
    {
        printf("Amount of dimes: %d\n", dimes);
    }

    if (nickels > 0)
    {

        printf("Amount of nickels: %d\n", nickels);
    }
    if (pennies > 0)
    {
        printf("Amount of pennies: %d\n", pennies);
    }
    int sum = quarters + dimes + nickels + pennies;
    printf("\nAmount of coins need: %d\n", sum);
}
