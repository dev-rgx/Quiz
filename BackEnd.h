#ifndef BackEnd
#define BackEnd
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

void Input(int *x)
{
    int ans;
    printf("\n Your Input : ");
Choice:
    ans = getch();
    if (ans == 49)
    {
        printf("1");
        *x = 1;
    }
    else if (ans == 50)
    {
        printf("2");
        *x = 2;
    }
    else if (ans == 51)
    {
        printf("3");
        *x = 3;
    }
    else if (ans == 52)
    {
        printf("4");
        *x = 4;
    }
    else
    {
        goto Choice;
    }
    Sleep(500);    
}

void Output(int *x, int *y, int*z)
{
    printf("\n\n\t Please wait... ");
    Sleep(2000);    
    printf("\n\n\t Status : ");
    if (*x == *y)
    {
        system("color 20");
        printf(" EUREKA! Right Answer. ");
        (*z)++;
    }
    else
    {
        system("color 40");
        printf(" OOPS! Wrong Answer. ");
    }
    Sleep(1000);
}

void Next(int *n)
{
    if (*n < 5)
    {
        printf("\n\n >>>> Press 'Tab' --> Next Question ");
    }
    else
    {
        printf("\n\n >>>> Press 'Tab' --> ScoreCard ");
    }
    int next = 0;
    while (next != 9)
    {
        next = getch();
    }
    Sleep(900);
    system("cls");
}

void ScoreCard(int *score, char name[])
{
    system("title SCORECARD");
    for (int i = 1; i <= 5; i++)
    {
        printf("\n Calculating you Score ");
        for (int j = 0; j < 5; j++)
        {
            printf(".");
            Sleep(200);
        }
        system("cls");
    }
    Sleep(100);
    printf("\a\n\n\t\t\t ScoreCard \n");
    printf("\t_________________________________________________\n\n\n");
    printf("\t\t # Player's Name     : %s \n\n", name);
    printf("\t\t # Correct Attempts  : %d \n\n", (*score - 1));
    printf("\t\t # Wrong Attempts    : %d \n\n", 5 - (*score - 1));
    printf("\t\t # Score    : %d out of 5 \n\n\n", (*score - 1));
    printf("\t_________________________________________________\n\n\n");
    Sleep(200);
    printf(" >>> Press 'Esc' --> Menu \n");
    int exit;
    while (exit != 27)
    {
        exit = getch();
    }
    Sleep(200);
    system("cls");
}

int Menu()
{
    system("title MENU");
    printf("\n\n\t # Menu : \n");
    printf("\t  --------------- \n\n\n");
    printf("\t\t 1. Play Again \n\n");
    printf("\t\t 2. Exit \n\n");

    int m;
trigger:
    m = getch();
    if (m == 49)
    {
        Sleep(600);
        system("cls");
        Sleep(200);
        return 0;
    }
    else if (m == 50)
    {
        Sleep(600);
        system("cls");
        printf("\n\n\n\t\t That's the END.");
        Sleep(800);
        printf("\n\n\t\t Feel free to play again...");
        Sleep(800);
        printf("\n\n\t\t THANK YOU :)");
        Sleep(2000);
        return 1;
    }    
}

#endif