// #include <stdio.h>

// int main()
// {
//     for (int i = 1; i <= 100; i++)
//     {
//         int flag = 0;
//         if (i % 3 == 0)
//         {
//             printf("Fizz");
//             flag = 1;
//         }
//         if (i % 5 == 0)
//         {
//             printf("Buzz");
//             flag = 1;
//         }
//         if (flag == 0)
//             printf("%d", i);
//         printf("\n");
//     }
//     return 0;
// }

#include <stdio.h>

int main()
{
    int c3 = 0;
    int c5 = 0;
    for (int i = 1; i <= 100; i++)
    {
        c3++;
        c5++;
        int flag = 1;
        if (c3 == 3)
        {
            printf("Fizz");
            c3 = 0;
            flag = 0;
        }
        if (c5 == 5)
        {
            printf("Buzz");
            c5 = 0;
            flag = 0;
        }
        if (flag)
            printf("%d", i);
        printf("\n");
    }
    return 0;
}