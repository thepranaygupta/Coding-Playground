#include <stdio.h>
#include <windows.h>
#include <string.h>
void main()
{
    int hr, min, sec;
    int c, i, d = 1000;
    char day[10];
    printf("Enter the Day: ");
    gets(day);
    printf("SET TIME:\n");
    scanf("%d%d%d", &hr, &min, &sec);

    if (hr > 24 || min > 60 || sec > 60)
    {
        printf("INVALID INPUT!\n");
        exit(0);
    }

    if (strcmp(day, "monday") == 0)
    {
        c = 1;
    }
    else if (strcmp(day, "tuesday") == 0)
    {
        c = 2;
    }
    else if (strcmp(day, "wednesday") == 0)
    {
        c = 3;
    }
    else if (strcmp(day, "thursday") == 0)
    {
        c = 4;
    }
    else if (strcmp(day, "friday") == 0)
    {
        c = 5;
    }
    else if (strcmp(day, "saturday") == 0)
    {
        c = 6;
    }
    else if (strcmp(day, "sunday") == 0)
    {
        c = 7;
    }

    int j = 1;
    while (j > 0)
    {
        sec++;
        if (sec > 59)
        {
            min++;
            sec = 0;
        }
        if (min > 59)
        {
            hr++;
            min = 0;
        }
        if (hr > 23)
        {
            hr = 0;
            c++;
        }
        printf("\n\nTIME IS- ");
        printf(" %02d : %02d : %02d", hr, min, sec);
        Sleep(d);
        system("cls");
        printf("\nDAY IS- ");
        for (i = c; i <= 7; i++)
        {

            if (c > 7)
            {
                c = 1;
            }

            if (c == 1)
            {
                printf("MONDAY");
                break;
            }
            else if (c == 2)
            {
                printf("TUESDAY");
                break;
            }
            else if (c == 3)
            {
                printf("WEDNESDAY");
                break;
            }
            else if (c == 4)
            {
                printf("THURSDAY");
                break;
            }
            else if (c == 5)
            {
                printf("FRIDAY");
                break;
            }
            else if (c == 6)
            {
                printf("SATURDAY");
                break;
            }
            else if (c == 7)
            {
                printf("SUNDAY");
                break;
            }

            system("cls");
        }
    }
}