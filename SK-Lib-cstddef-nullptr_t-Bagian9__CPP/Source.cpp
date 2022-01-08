#include <iostream>
#include <typeinfo>
#include <conio.h>

/*
    Source by BelajarCPP
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main() {
    std::cout << typeid(NULL).name() << "\n" << typeid(nullptr).name();

    _getch();
    return 0;
}