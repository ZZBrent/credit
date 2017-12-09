#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long long a = 0;
    printf("Number: ");
    a = get_long_long();
    int digit = 0;
    int total = 0;
    long long credit = a;
    while(credit>0) {
        int num = credit % 10;
        credit /= 10;
        if(digit == 0) {
            total += num;
            digit = 1;
        }
        else {
            int productDigitTotal = 0;
            int doubled = num*2;
            while(doubled > 0) {
                productDigitTotal += doubled % 10;
                doubled /= 10;
            }
            total += productDigitTotal;
            digit = 0;
        }
    }
    if(total%10 != 0) {
        printf("INVALID\n");
    }
    else {
        while(a>10) {
            a /= 10;
        }
        if(a == 3) {
            printf("AMEX\n");
        }
        else if (a == 4) {
            printf("VISA\n");
        }
        else if (a == 5) {
            printf("MASTERCARD\n");
        }
    }
}