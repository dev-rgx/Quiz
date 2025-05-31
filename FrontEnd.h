#ifndef FrontEnd
#define FrontEnd
#include<stdio.h>
#include<conio.h>
#include<windows.h>

int Theme()
{
    int t;
    system("title Theme");
    system("color B0");
    printf("\n\n # Select your theme : \n\n");
    printf("\t 1. Dark Theme \n\n");
    printf("\t 2. Light Theme \n\n");
    do
    {
        t = getch();
    } while (t != 49 && t != 50);
    Sleep(1000);
    if (t == 49)
    {
        return 49;
    }
    else if (t == 50)
    {
        return 50;       
    }
}
void Preloader()
{
    system("title Quiz? [version ~ v.3.O]");
    printf("\n\n\t Initialising Display .... ");
    Sleep(2400);
    system("cls");
    printf("\n\n\t Fetching Data .... ");
    Sleep(2400);
    system("cls");
}
void Disclaimer()
{
    system("title DISCLAIMER");
    Sleep(2000);
    FILE *ptr;
    char c;
    ptr = fopen("Disclaimer.txt", "r");
    c = fgetc(ptr);
    while (c != EOF)
    {
        printf("%c", c);
        c = fgetc(ptr);
    }
    printf("\a\n\t");
    system("pause");
    Sleep(800);
    system("cls");   
}
void Loading()
{
    for (int l = 1; l <= 5; l++)
    {
        printf("\n LOADING ");
        for (int m = 1; m <= 5; m++)
        {
            printf(".");
            Sleep(200);
        }
        system("cls");       
    }
}

#endif