
#include <stdio.h>

// Calculating Total Interest Amount;

int main(void)
{
    double rate, principal, interestA, totalint, daylength;




    while (principal != -1)
    {
        printf("Enter the loan principal amount: (-1 to exit)");
        scanf("%lf",&principal);
        printf("Enter Interest rate: (-1 to exit)");
        scanf("%lf",&rate);
        printf("Enter loan term(in days): (-1 to exit)");
        scanf("%lf",&daylength);
        interestA = principal * rate * daylength / 365;
        printf("The interest charge for this loan is: $%f\n",interestA);

        if (principal != -1)
        totalint = principal * rate * daylength / 365;

    }

    printf("The total interest charge for all the of the loans: $%f\n",totalint);
}
