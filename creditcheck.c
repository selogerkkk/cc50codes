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

    int card1, card2, card3, card4, card5, card6, card7, card8;
    card1 = fabsf(((card % power10(2)) / power10(1) * 2));
    card2 = fabsf(((card % power10(4)) / power10(3) * 2));
    card3 = fabsf(((card % power10(6)) / power10(5) * 2));
    card4 = fabsf(((card % power10(8)) / power10(7) * 2));
    card5 = fabsf(((card % power10(10)) / power10(9) * 2));
    card6 = fabsf(((card % power10(12)) / power10(11) * 2));
    card7 = fabsf(((card % power10(14)) / power10(13) * 2));
    card8 = fabsf(((card % power10(16)) / power10(15) * 2));

    card1 = (card1 % 100 / 10) + (card1 % 10);
    card2 = (card2 % 100 / 10) + (card2 % 10);
    card3 = (card3 % 100 / 10) + (card3 % 10);
    card4 = (card4 % 100 / 10) + (card4 % 10);
    card5 = (card5 % 100 / 10) + (card5 % 10);
    card6 = (card6 % 100 / 10) + (card6 % 10);
    card7 = (card7 % 100 / 10) + (card7 % 10);
    card8 = (card8 % 100 / 10) + (card8 % 10);

    int sum1 = card1 + card2 + card3 + card4 + card5 + card6 + card7 + card8;
    int card9, card10, card11, card12, card13, card14, card15, card16;

    card9 = fabsf((card % power10(1)));
    card10 = fabsf((card % power10(3) / power10(2)));
    card11 = fabsf((card % power10(5) / power10(4)));
    card12 = fabsf((card % power10(7) / power10(6)));
    card13 = fabsf((card % power10(9) / power10(8)));
    card14 = fabsf((card % power10(11) / power10(10)));
    card15 = fabsf((card % power10(13) / power10(12)));
    card16 = fabsf((card % power10(15) / power10(14)));
    int sum2 = card9 + card10 + card11 + card12 + card13 + card14 + card15 + card16;
    int sum3 = sum1 + sum2;

    int length = 0;
    long long VISA = card;
    long long AMEX = card;
    long long MASTERCARD = card;

    if ((sum3 % 10) != 0)
    {
        printf("%s\n", "INVALID");
        return 0;
    }

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
}