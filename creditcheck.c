#include <stdio.h>
#include <math.h>

long long power10(int numberOfZeros)
{
    return fabsf(pow(10, numberOfZeros));
}

int main()
{

    long long card;
    printf("Insert the card number: ");
    scanf("%lld", &card);

    int card1, card2, card3, card4, card5, card6, card7, card8, card9, card10, card11, card12, card13, card14, card15, card16;
    long long credit_array1[] = {card1, card2, card3, card4, card5, card6, card7, card8};
    long long credit_array2[] = {card9, card10, card11, card12, card13, card14, card15, card16};
    int sum1, sum2;
    for (int i = 1, j = 0; i < 8 * 2, j < 8; i = i + 2, j++)
    {
        credit_array1[j] = fabsf(((card % power10(i + 1)) / power10(i) * 2));
        credit_array1[j] = (credit_array1[j] % 100 / 10) + (credit_array1[j] % 10);
        sum1 = credit_array1[j];
        credit_array2[j] = fabsf((credit_array2[j] % power10(i) / power10(i - 1)));
        card9 = fabsf((card % power10(1)));
        printf("I = %d, I+1 = %d\n", i, i - 1);
        sum2 = credit_array2[j];
    }

    int sum3 = sum1 + sum2;
    int length = 0;
    long long VISA = card;
    long long AMEX = card;
    long long MASTERCARD = card;

    while (card > 0)
    {
        card = card / 10;
        length++;
    }

    while (VISA >= 10)
    {
        VISA /= 10;
    }
    if (VISA == 4 && (length == 13 || length == 16))
    {
        printf("VISA");
        return 0;
    }

    while (AMEX >= power10(13))
    {
        AMEX /= power10(13);
    }

    if ((AMEX == 34 || AMEX == 37) && (length == 15))
    {
        printf("%s\n", "AMEX");
        return 0;
    }

    while (MASTERCARD >= power10(14))
    {
        MASTERCARD /= power10(14);
    }

    if ((MASTERCARD == 51 || MASTERCARD == 52 || MASTERCARD == 53 || MASTERCARD == 54 || MASTERCARD == 55) && (length == 16))
    {
        printf("%s\n", "MASTERCARD");
        return 0;
    }

    if ((sum3 % 10) != 0)
    {
        printf("%s\n", "INVALID");
        return 0;
    }
}