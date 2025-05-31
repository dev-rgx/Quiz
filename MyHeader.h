#ifndef MyHeader
#define MyHeader
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<winuser.h>

HANDLE wHnd;
CONSOLE_CURSOR_INFO curInf;

void HideCursor()
{
    wHnd = GetStdHandle(STD_OUTPUT_HANDLE);
    curInf.dwSize = 12;
    curInf.bVisible = FALSE;
    SetConsoleCursorInfo(wHnd, &curInf);
}

void UnhideCursor()
{
    wHnd = GetStdHandle(STD_OUTPUT_HANDLE);
    curInf.dwSize = 12;
    curInf.bVisible = TRUE;
    SetConsoleCursorInfo(wHnd, &curInf);
}

// void FullSize()
// {
//     wHnd = GetStdHandle(STD_OUTPUT_HANDLE);
//     COORD bufferSize = {150, 250};
//     SetConsoleScreenBufferSize(wHnd, bufferSize);
// }

void SetFontSize(int FontSize)
{
    CONSOLE_FONT_INFOEX info = {0};
    info.cbSize = sizeof(info);
    info.dwFontSize.Y = FontSize;
    info.FontWeight = FW_NORMAL;
    wcscpy(info.FaceName, L"Raster Fonts");
    SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), TRUE, &info);
}

#endif