//03_PRANAY GUPTA
#include <stdio.h>
#include <string.h>

void encode(char *es)
{
    for (int i = 0; es[i] != '\0'; ++i)
    {
        int ascii = es[i];
        if (ascii > 64 && ascii < 91)
        {
            if (es[i] >= 'A' && es[i] <= 'X')
                es[i] = es[i] + 2;
            else if (es[i] == 'Y')
                es[i] = 'A';
            else if (es[i] == 'Z')
                es[i] = 'B';
        }
        else if (ascii > 96 && ascii < 123)
        {
            if (es[i] >= 'a' && es[i] <= 'x')
                es[i] = es[i] + 2;
            else if (es[i] == 'y')
                es[i] = 'a';
            else if (es[i] == 'z')
                es[i] = 'b';
        }
    }
}

void decode(char *ds)
{
    for (int i = 0; ds[i] != '\0'; ++i)
    {
        int ascii = ds[i];
        if (ascii > 64 && ascii < 91)
        {
            if (ds[i] >= 'C' && ds[i] <= 'Z')
                ds[i] = ds[i] - 2;
            else if (ds[i] == 'A')
                ds[i] = 'Y';
            else if (ds[i] == 'B')
                ds[i] = 'Z';
        }
        else if (ascii > 96 && ascii < 123)
        {
            if (ds[i] >= 'c' && ds[i] <= 'z')
                ds[i] = ds[i] - 2;
            else if (ds[i] == 'a')
                ds[i] = 'y';
            else if (ds[i] == 'b')
                ds[i] = 'z';
        }
    }
}

int main()
{
    char os[100];
    printf("Enter the String: ");
    gets(os);
    printf("The Original String is = %s", os);

    encode(os);
    printf("\nEncoded String = %s", os);
    decode(os);
    printf("\nDecoded String = %s", os);
    return 0;
}
