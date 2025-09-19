#include <iostream>
#include <algorithm>

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

    if ( chislo_1 < chislo_2 ) 
        std::swap( chislo_1, chislo_2 );

    if ( chislo_1 < chislo_3 )
        std::swap( chislo_1, chislo_3 );

    if ( chislo_2 < chislo_3 ) 
        std::swap( chislo_2, chislo_3 );

    std::cout << "one: " << chislo_1 << ", two: " << chislo_2 << ", three: " << chislo_3 << std::endl;

    return 0;
}