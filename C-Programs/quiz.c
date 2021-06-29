#include <stdio.h>
#include <windows.h>
int main()
{
    int op, n;
    char name[20];
    printf("            QUIZ\n");
    printf("_________________________________\n\n");

    printf("<<<<<<TOPIC:- AMAZING QUIZ >>>>>>\n");
    printf("________________________________\n\n");

    printf("\nENTER FIRST NAME:");

    gets(name);

    printf("\nWellcome %s to the quiz\n", name);
    for (op = 1; op <= 5; op++)
    {
        system("cls");
        switch (op)
        {
        case 1:

            printf("\n\nQ1.) What changed into alcohol while in brewing?\n");
            printf("1.Sugar     2.Grappes\n");
            printf("3.Berry.    4.Salt\n");
            printf("\nENTER OPTION:");
            scanf(" %d", &n);
            if (n == 1)
            {
                printf("\nCORRECT ANSWER.\n");
                printf("__________________");
            }

            else
            {
                printf("\nWRONG ANSWER!! correct answer is 1.Sugar\n");
                printf("___________________________________________");
            }
            break;

        case 2:

            printf("\n\nQ2.) What the only fruit to possess seeds on the exterior?\n");
            printf("1.Strawberry    2.Grappes\n");
            printf("3.Gowava.       4.Mango\n");
            printf("\nENTER OPTION:");
            scanf(" %d", &n);

            if (n == 1)
            {
                printf("\nCORRECT ANSWER.\n");
                printf("__________________");
            }

            else
            {
                printf("\nWRONG ANSWER!! Right answer is 1.Sugar\n");
                printf("________________________________________");
            }
            break;

        case 3:

            printf("\n\nQ3.)Apple pie is a diesh of which country?\n");
            printf("1.France        2.Russia\n");
            printf("3.America       4.England\n");
            printf("\nENTER OPTION:");
            scanf(" %d", &n);

            if (n == 4)
            {
                printf("\nCORRECT ANSWER.\n");
                printf("__________________");
            }

            else
            {
                printf("\nWRONG ANSWER!! Right answer is 4.England \n");
                printf("__________________________________________");
            }
            break;

        case 4:

            printf("\n\nQ4.)The unicorn is the national animal of which country?\n");
            printf("1.Srilanka       2.Italy\n");
            printf("3.Iceland        4.Scotland\n");
            printf("\nENTER OPTION:");
            scanf(" %d", &n);

            if (n == 4)
            {
                printf("\nCORRECT ANSWER.\n");
                printf("__________________");
            }

            else
            {
                printf("\nWRONG ANSWER!! Right answer is 4.Scotland \n");
                printf("___________________________________________");
            }
            break;

        case 5:

            printf("\n\nQ5.)You can hear a blue whale's heartbeat from more than ___miles?\n");
            printf("1. 3miles       2. 4miles\n");
            printf("3. 2miles       4. 6miles\n");
            printf("\nENTER OPTION:");
            scanf(" %d", &n);

            if (n == 3)
            {
                printf("\nCORRECT ANSWER.\n");
                printf("__________________");
            }

            else
            {
                printf("\nWRONG ANSWER!! Right answer is 3. 2miles \n");
                printf("__________________________________________");
            }
            break;
        }
    }
    return 0;
}
