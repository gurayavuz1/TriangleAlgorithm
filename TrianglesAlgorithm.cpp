// TrianglesAlgorithm.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>

int main()
{
    int deger;
    std::cout << "Dongu degerini giriniz: "; std::cin >> deger;
    for (int a = 0; a <= deger; a++)
    {
        for (int b = 0; b <= a; b++)
        {
            std::cout << "*";
        }
       
        std::cout << std::endl;

    }
    std::cout << std::endl;
    for (int a = 0; a <= deger; a++)
    {
        for (int b = deger - a ; b >= 0; b--)
        {
            std::cout << "*";
        }

        std::cout << std::endl;

    }
    std::cout << std::endl;
    for (int a = 0; a <= deger; a++)
    {
        for (int b = a; b > 0; b--)
        {
            std::cout << " ";
        }

        for (int b = deger - a; b >= 0; b--)
        {
            std::cout << "*";
        }

        std::cout << std::endl;

    }
    std::cout << std::endl;
    for (int a = 0; a <= deger; a++)
    {
        for (int b = deger - a ; b >= 0; b--)
        {
            if (b == 0)
            {
                std::cout << "*";
            }
            else
            std::cout << " ";
        }

        for (int b = a; b > 0; b--)
        {
            std::cout << "*";
        }
        std::cout << std::endl;

    }

    
}


