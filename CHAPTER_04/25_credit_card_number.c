#include <stdio.h>

int main()
{
    long long num;
    do
    {
        printf("Enter the card number: ");
        scanf("%lld", &num);
    }
    while (num <= 0);
    
    int position = 1;
    int sum = 0;
    int length = 0;
    long long number = num;
    long long b = number;
    int first_two_digit = 0;
    int first_digit = 0;

    while (num > 0)
    {
        int digit = num % 10;
        if (position % 2 == 0)
        {
            digit *= 2;
        }
        if (digit > 9)
        {
            digit = (digit / 10) + (digit % 10);
        }

        sum += digit;
        position++;
        num /= 10;
    }


    while (b > 0)
    {
        length++;
        b /= 10;
    }

    b = number;

    while (b >= 100)
    {
        b /= 10;
    }

    first_two_digit = b;
    first_digit = b / 10;

    
    if (sum % 10 != 0)
    {
        printf("INVALID\n");
    }
    else if ((length == 13 || 16) && first_digit == 4)
    {
        printf("VISA\n");
    }
    else if (length == 15 && (first_two_digit == 34 || 37))
    {
        printf("AMEX\n");
    }
    else if (length == 16 && (first_two_digit >= 51 && first_two_digit <= 55))
    {
        printf("MASTERCARD\n");
    }
    else
    {
        printf("INVALID\n");
    }

    return 0;
}