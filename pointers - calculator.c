#include <stdio.h>

void div(int *a, int *b)
    {
        int c;
        c = *a / *b;
        printf("%d",c);
    }

void multp(int *a, int *b)
    {
        int c;
        c = *a * *b;
        printf("%d",c);
    }

void ada(int *a, int *b)
    {
        int c;
        c = *a + *b;
        printf("%d",c);
    }

void neg(int *a, int *b)
    {
        int c;
        c = *a - *b;
        printf("%d",c);
    }


int main ()
{
    int x, y, button;



while(1)
{
    printf("Input 2 numbers to calculate:\n");

    scanf("%d", &x);
    scanf("%d", &y);

    system("cls");

    printf("The numbers are %d and %d:\n", x,y);
    printf("Select the type of calculus:\n1./\n2.*\n3.+\n4.-\n");

    scanf("%d", &button);

    switch(button)
        {
        case 1:
            system("cls");
            printf("%d / %d is: ",x,y);
            div(&x,&y);
            getchar();
            getchar();
        break;

        case 2:
            system("cls");
            printf("%d * %d is: ",x,y);
            multp(&x,&y);
            getchar();
            getchar();
        break;

        case 3:
            system("cls");
            printf("%d + %d is: ",x,y);
            ada(&x,&y);
            getchar();
            getchar();
        break;

        case 4:
            system("cls");
            printf("%d - %d is: ",x,y);
            neg(&x,&y);
            getchar();
            getchar();
        break;

        default :
            system("cls");
            printf("Incorrect input");
            getchar();
            getchar();

        }
}

    printf("\n\nPress any key to return to main menu");
    getchar();
    getchar();

    return 0;
}
