#include <iostream>

int main( )
{
    int chislo_1 = 0;
    int chislo_2 = 0;
    int chislo_3 = 0;

    std::cout << "enter one number: ";
    std::cin >> chislo_1;

    std::cout << "enter two number: ";
    std::cin >> chislo_2;

    std::cout << "enter three number: ";
    std::cin >> chislo_3;

    int tmp{};

    if ( chislo_1 > chislo_2 )
    {
        tmp = chislo_1;

        chislo_1 = chislo_2;
        chislo_2 = tmp;
    }

    if ( chislo_1 > chislo_3 ) 
    {
        tmp = chislo_1;

        chislo_1 = chislo_3;
        chislo_3 = tmp;
    }

    if ( chislo_2 > chislo_3 )
    {
        tmp = chislo_2;

        chislo_2 = chislo_3;
        chislo_3 = tmp;
    }

    std::cout << chislo_1 << ", " << chislo_2 << ", " << chislo_3 << std::endl;

    return 0;
}