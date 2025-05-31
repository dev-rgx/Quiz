#ifndef Question
#define Question
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
// ****************************** Function Prototype ******************************
void Q1(int *x, int *y); void Q2(int *x, int *y); void Q3(int *x, int *y);
void Q4(int *x, int *y); void Q5(int *x, int *y); void Q6(int *x, int *y);
void Q7(int *x, int *y); void Q8(int *x, int *y); void Q9(int *x, int *y);
void Q10(int *x, int *y); void Q11(int *x, int *y); void Q12(int *x, int *y);
void Q13(int *x, int *y); void Q14(int *x, int *y); void Q15(int *x, int *y);
void Q16(int *x, int *y); void Q17(int *x, int *y); void Q18(int *x, int *y);
void Q19(int *x, int *y); void Q20(int *x, int *y);
// ******************************** Question Bank **********************************
void QBank(int *ans, int *number)
{
    int a;
    int b = *number;
    int num;
    srand(time(0));
    num = rand() % 20 + 1;
    if (num == 1)
    {
        Q1(&a, &b);
    }
    else if (num == 2)
    {
        Q2(&a, &b);
    }
    else if (num == 3)
    {
        Q3(&a, &b);
    }
    else if (num == 4)
    {
        Q4(&a, &b);
    }
    else if (num == 5)
    {
        Q5(&a, &b);
    }
    else if (num == 6)
    {
        Q6(&a, &b);
    }
    else if (num == 7)
    {
        Q7(&a, &b);
    }
    else if (num == 8)
    {
        Q8(&a, &b);
    }
    else if (num == 9)
    {
        Q9(&a, &b);
    }
    else if (num == 10)
    {
        Q10(&a, &b);
    }
    else if (num == 11)
    {
        Q11(&a, &b);
    }
    else if (num == 12)
    {
        Q12(&a, &b);
    }
    else if (num == 13)
    {
        Q13(&a, &b);
    }
    else if (num == 14)
    {
        Q14(&a, &b);
    }
    else if (num == 15)
    {
        Q15(&a, &b);
    }
    else if (num == 16)
    {
        Q16(&a, &b);
    }
    else if (num == 17)
    {
        Q17(&a, &b);
    }
    else if (num == 18)
    {
        Q18(&a, &b);
    }
    else if (num == 19)
    {
        Q19(&a, &b);
    }
    else if (num == 20)
    {
        Q20(&a, &b);
    }
    *ans = *(&a);
    
}
// ********************************* Questions *************************************
void Q1(int *x, int *y)
{
    *x = 3;
    printf("\n\n Q%d.Which of the following is the hardest substance on the earth? \n\n\n", *y);
    Sleep(1000);
    printf("\t (1) Corundum \n\n");
    printf("\t (2) Graphite \n\n");
    printf("\t (3) Diamond \n\n");
    printf("\t (4) Fullerene \n\n\n");
}
void Q2(int *x, int *y)
{
    *x = 4;
    printf("\n\n Q%d.Which of these was the former name of T-series music company? \n\n\n", *y);
    Sleep(1000);
    printf("\t (1) Saregama Music \n\n");
    printf("\t (2) Sangeet \n\n");
    printf("\t (3) Bhakti Sagar \n\n");
    printf("\t (4) Supercassettes \n\n\n");
}
void Q3(int *x, int *y)
{
    *x = 2;
    printf("\n\n Q%d.Which of the following Metallic oxide has neutral pH? \n\n\n", *y);
    Sleep(1000);
    printf("\t (1) Zinc Oxide \n\n");
    printf("\t (2) Mangananese Dioxide \n\n");
    printf("\t (3) Caesium Oxide \n\n");
    printf("\t (4) Aluminium Oxide \n\n\n");
}
void Q4(int *x, int *y)
{
    *x = 3;
    printf("\n\n Q%d.Which is the hottest planet in our solar system? \n\n\n", *y);
    Sleep(1000);
    printf("\t (1) Mercury \n\n");
    printf("\t (2) Mars \n\n");
    printf("\t (3) Venus \n\n");
    printf("\t (4) Earth \n\n\n");
}
void Q5(int *x, int *y)
{
    *x = 2;
    printf("\n\n Q%d.Who is known as 'the Father of Medicine'? \n\n\n", *y);
    Sleep(1000);
    printf("\t (1) Eratosthanese \n\n");
    printf("\t (2) Hippocratus \n\n");
    printf("\t (3) Herodotus \n\n");
    printf("\t (4) Democritus \n\n\n");
}
void Q6(int *x, int *y)
{
    *x = 1;
    printf("\n\n Q%d.Which country has the most islands? \n\n\n", *y);
    Sleep(1000);
    printf("\t (1) Sweden \n\n");
    printf("\t (2) Japan \n\n");
    printf("\t (3) Indonesia \n\n");
    printf("\t (4) India \n\n\n");
}
void Q7(int *x, int *y)
{
    *x = 4;
    printf("\n\n Q%d.Which continent has the world's largest desert? \n\n\n", *y);
    Sleep(1000);
    printf("\t (1) Asia \n\n");
    printf("\t (2) Africa \n\n");
    printf("\t (3) Australia \n\n");
    printf("\t (4) Antarctica \n\n\n");
}
void Q8(int *x, int *y)
{
    *x = 2;
    printf("\n\n Q%d.Which country has the most pyramids? \n\n\n", *y);
    Sleep(1000);
    printf("\t (1) Egypt\n\n");
    printf("\t (2) Sudan \n\n");
    printf("\t (3) Chad \n\n");
    printf("\t (4) Zimbabwe \n\n\n");
}
void Q9(int *x, int *y)
{
    *x = 1;
    printf("\n\n Q%d.Who wrote the book 'Indica'? \n\n\n", *y);
    Sleep(1000);
    printf("\t (1) Megasthenes \n\n");
    printf("\t (2) Vasco de Gama \n\n");
    printf("\t (3) William Hawkins \n\n");
    printf("\t (4) Marco Polo \n\n\n");
}
void Q10(int *x, int *y)
{
    *x = 3;
    printf("\n\n Q%d.Which Australian ground is also known as 'Gabba'? \n\n\n", *y);
    Sleep(1000);
    printf("\t (1) Adelaide \n\n");
    printf("\t (2) Sydney \n\n");
    printf("\t (3) Brisbane \n\n");
    printf("\t (4) Melbourne \n\n\n");
}
void Q11(int *x, int *y)
{
    *x = 1;
    printf("\n\n Q%d.What is the name of greek symbol used to denote 'Infinity'? \n\n\n", *y);
    Sleep(1000);
    printf("\t (1) Lemniscate \n\n");
    printf("\t (2) Viniculum \n\n");
    printf("\t (3) Psi \n\n");
    printf("\t (4) Chi \n\n\n");
}
void Q12(int *x, int *y)
{
    *x = 2;
    printf("\n\n Q%d.What is the only rock that floats on water? \n\n\n", *y);
    Sleep(1000);
    printf("\t (1) Obsidian \n\n");
    printf("\t (2) Pumice \n\n");
    printf("\t (3) Basalt \n\n");
    printf("\t (4) Rhyolite \n\n\n");
}
void Q13(int *x, int *y)
{
    *x = 1;
    printf("\n\n Q%d.Which is the tallest mountain peak in the solar system? \n\n\n", *y);
    Sleep(1000);
    printf("\t (1) Olympus Mons \n\n");
    printf("\t (2) Equatorial Ridge of Lapetus \n\n");
    printf("\t (3) Ascraeus Mons \n\n");
    printf("\t (4) Rheasilvea Mons \n\n\n");
}
void Q14(int *x, int *y)
{
    *x = 4;
    printf("\n\n Q%d.What is the only food having eternal shelf life? \n\n\n", *y);
    Sleep(1000);
    printf("\t (1) Dehydrated milk \n\n");
    printf("\t (2) Canned Beans \n\n");
    printf("\t (3) Quinoa \n\n");
    printf("\t (4) Honey \n\n\n");
}
void Q15(int *x, int *y)
{
    *x = 3;
    printf("\n\n Q%d.Which country drinks the most coffee per capita? \n\n\n", *y);
    Sleep(1000);
    printf("\t (1) United Kingdom \n\n");
    printf("\t (2) France \n\n");
    printf("\t (3) Finland \n\n");
    printf("\t (4) Netherlands \n\n\n");
}
void Q16(int *x, int *y)
{
    *x = 2;
    printf("\n\n Q%d.What is the most expensive spice in the world by weight? \n\n\n", *y);
    Sleep(1000);
    printf("\t (1) Green Cardamom \n\n");
    printf("\t (2) Saffron \n\n");
    printf("\t (3) Cloves \n\n");
    printf("\t (4) Vanilla \n\n\n");
}
void Q17(int *x, int *y)
{
    *x = 2;
    printf("\n\n Q%d.Which game studio makes the Red Dead Redemption series? \n\n\n", *y);
    Sleep(1000);
    printf("\t (1) Epic Games \n\n");
    printf("\t (2) Rockstar Games \n\n");
    printf("\t (3) Gameloft \n\n");
    printf("\t (4) Touchfoo \n\n\n");
}
void Q18(int *x, int *y)
{
    *x = 3;
    printf("\n\n Q%d.Which peace treaty ended World War I? \n\n\n", *y);
    Sleep(1000);
    printf("\t (1) Treaty of Constantinople \n\n");
    printf("\t (2) Treaty of Kadesh \n\n");
    printf("\t (3) Treaty of Versailles \n\n");
    printf("\t (4) Treaty of Paris \n\n\n");
}
void Q19(int *x, int *y)
{
    *x = 1;
    printf("\n\n Q%d.Which is the only body part that is fully grown from birth? \n\n\n", *y);
    Sleep(1000);
    printf("\t (1) Eyes \n\n");
    printf("\t (2) Ears \n\n");
    printf("\t (3) Teeth \n\n");
    printf("\t (4) Nose \n\n\n");
}
void Q20(int *x, int *y)
{
    *x = 4;
    printf("\n\n Q%d.What is the loudest animal on Earth? \n\n\n", *y);
    Sleep(1000);
    printf("\t (1) Bulldog Bat \n\n");
    printf("\t (2) Cicadas \n\n");
    printf("\t (3) Howler Monkey \n\n");
    printf("\t (4) Sperm Whale \n\n\n");
}

#endif