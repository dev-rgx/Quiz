#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
// User-Defined Header Files
#include "FrontEnd.h"
#include "Question.h"
#include "BackEnd.h"
#include "MyHeader.h"

void color(int *x);

void main()
{
    SetFontSize(25);
    // FullSize();
    HideCursor();
    int theme = Theme();
    color(&theme);
    system("cls");
    UnhideCursor();
    system("title @ PROFILE");
    char name[20];
    printf("\n\n Enter your name : ");
    gets(name);
    HideCursor();
    Sleep(800);
    printf("\n\n Hello, %s", name);
    Sleep(2200);
    system("cls");
    Preloader();
    Disclaimer();

    int entry;
    int answer;
    int i;
    do
    {
       Loading();
       system("title Quiz[version ~ v.3.O]");
       int points = 1;
       int n = 1;
       do
       {
            HideCursor();
            color(&theme);
            QBank(&answer, &n);
            UnhideCursor();
            Input(&entry);
            HideCursor();
            Output(&entry, &answer, &points);
            Next(&n);
            n++;
       } while (n <= 5);
        HideCursor();
        color(&theme);
        ScoreCard(&points, name);
        i = Menu();
    } while (i == 0);
    system("exit");
}
void color(int *x)
{
    if (*x == 49)
    {
        system("color 0F");
    }
    else if (*x == 50)
    {
        system("color F0");
    } 
}