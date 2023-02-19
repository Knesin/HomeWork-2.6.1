#include <iostream>
#include "my_math.h"

int main()
{
    int i_first, i_second;
    int operation;

    setlocale(LC_ALL, "Russian");
    std::cout << "Введите первое число: ";
    std::cin >> i_first;
    std::cout << "Введите второе число: ";
    std::cin >> i_second;
    std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    std::cin >> operation;
    switch (operation) {
    case 1:
        std::cout << i_first << " плюс " << i_second << " = " << my_add(i_first, i_second) << std::endl;
        break;
    case 2:
        std::cout << i_first << " минус " << i_second << " = " << my_sub(i_first, i_second) << std::endl;
        break;
    case 3:
        std::cout << i_first << " умножить " << i_second << " = " << my_mult(i_first, i_second) << std::endl;
        break;
    case 4:
        if (i_second != 0)
            std::cout << i_first << " разделить " << i_second << " = " << my_div(i_first, i_second) << std::endl;
        else
            std::cout << "Делить на 0 нельзя" << std::endl;
        break;
    case 5:
        std::cout << i_first << " в степени " << i_second << " = " << my_pow(i_first, i_second) << std::endl;
        break;
    default:
        std::cout << "Не верный номер операции." << std::endl;
    }
}
