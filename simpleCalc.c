#include <stdio.h>

void div(double a, double b);
void mult(double a, double b);
void sum(double a, double b);
void sub(double a, double b);
void menu();
void reshenie(int res, double a, double b);

int main(void)
{
    menu();
    return 0;
}

void menu()
{
    double a = 0, b = 0;
    int res = -1;

    printf("enter / = div\n");
    printf("enter * = mult\n");
    printf("enter + = sum\n");
    printf("enter - = sub\n");
    printf("enter q for quit\n");

    while (res != 'q') {

        printf("\nEnter func : ");
        res = fgetc(stdin);
        setbuf(stdin, NULL);

        if (res != 'q') {
            printf("Enter a : ");
            scanf("%lf", &a);
            setbuf(stdin, NULL);
            printf("Enter b : ");
            scanf("%lf", &b);
            setbuf(stdin, NULL);

            reshenie(res, a, b);
        } else {
            printf("Good bye!\n");
        }
    }
}

void reshenie(int res, double a, double b)
{
    switch (res) {
    case 47:
        div(a, b);
        break;
    case 42:
        mult(a, b);
        break;
    case 43:
        sum(a, b);
        break;
    case 45:
        sub(a, b);
        break;
    default:
        printf("You enter hrenoviy simbol!\n");
        break;
    }
}

void div(double a, double b)
{
    if (b != 0) {
        printf("res = %lf\n", a / b);
    } else {
        printf("NA 0 DIV NENADO!\n");
    }
}

void mult(double a, double b) { printf("res = %lf\n", a * b); }

void sum(double a, double b) { printf("res = %lf\n", a + b); }

void sub(double a, double b) { printf("res = %lf\n", a - b); }
