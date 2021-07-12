// //03_PRANAY GUPTA
// #include <stdio.h>
// //#include <string.h>
// //#include <math.h>

// int main()
// {
//     long int binary, decimal = 0, base = 1;
//     printf("Enter the Binary Number to be Converted: ");
//     scanf("%d", &binary);
//     while (binary > 0)
//     {
//         int rem = binary % 10;
//         if (rem != 1 || rem != 0)
//         {
//             printf("Number is not Binary");
//             return 1;
//         }
//         binary /= 10;
//         decimal = decimal + (rem * base);
//         base *= 2;
//     }
//     printf("\nIts Decimal Value is = %d", decimal);
//     return 0;
// }

//03_PRANAY GUPTA
#include <stdio.h>
#include <string.h>
//#include <math.h>

int main()
{
    char binary[32];
    long long int decimal = 0, base = 1;
    printf("Enter the Binary Number: ");
    gets(binary);
    int i = strlen(binary) - 1;
    while (i >= 0)
    {
        if (binary[i] < 48 || binary[i] > 49)
        {
            printf("\nThe number is not Binary");
            return 1;
        }
        decimal = decimal + (((int)binary[i] - 48) * base);
        base *= 2;
        i--;
    }
    printf("\nIts Decimal Value is = %lld", decimal);
    return 0;
}