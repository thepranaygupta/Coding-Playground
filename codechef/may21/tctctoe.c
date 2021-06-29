#include <stdio.h>
int main(void)
{
    int t, i, j, k;
    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {
        char a[3][3];
        int o = 0, x = 0, u = 0, count = 0;
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                scanf(" %c", &a[j][k]);
                if (a[j][k] == 'O')
                    o++;
                else if (a[j][k] == 'X')
                    x++;
                else if (a[j][k] == '_')
                    u++;
            }
        }

        if (o - x > 1 || x - o > 1 || (o + x + u != 9))
            printf("3\n");
        else
        {
            //Rows
            if ((a[0][0] == 'O' && a[0][1] == 'O' && a[0][2] == 'O') || (a[0][0] == 'X' && a[0][1] == 'X' && a[0][2] == 'X'))
                count++;
            if ((a[1][0] == 'O' && a[1][1] == 'O' && a[1][2] == 'O') || (a[1][0] == 'X' && a[1][1] == 'X' && a[1][2] == 'X'))
                count++;
            if ((a[2][0] == 'O' && a[2][1] == 'O' && a[2][2] == 'O') || (a[2][0] == 'X' && a[2][1] == 'X' && a[2][2] == 'X'))
                count++;
            //Columns
            if ((a[0][0] == 'O' && a[1][0] == 'O' && a[2][0] == 'O') || (a[0][0] == 'X' && a[1][0] == 'X' && a[2][0] == 'X'))
                count++;
            if ((a[0][1] == 'O' && a[1][1] == 'O' && a[2][1] == 'O') || (a[0][1] == 'X' && a[1][1] == 'X' && a[2][1] == 'X'))
                count++;
            if ((a[0][2] == 'O' && a[1][2] == 'O' && a[2][2] == 'O') || (a[0][2] == 'X' && a[1][2] == 'X' && a[2][2] == 'X'))
                count++;
            //Diagonals
            if ((a[0][0] == 'O' && a[1][1] == 'O' && a[2][2] == 'O') || (a[0][0] == 'X' && a[1][1] == 'X' && a[2][2] == 'X'))
                count++;
            if ((a[0][2] == 'O' && a[1][1] == 'O' && a[2][0] == 'O') || (a[0][2] == 'X' && a[1][1] == 'X' && a[2][0] == 'X'))
                count++;

            // if(count<=1||u==0)
            //     printf("1\n");
            if (count == 1 || (count == 0 && u == 0))
                printf("1\n");
            else if (count == 0 && u > 0)
                printf("2\n");
            else
                printf("3\n");
        }
    }
    return 0;
}