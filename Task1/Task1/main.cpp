//#define MODE 1

#ifndef MODE
#error "Constant MODE wasn't defined!";
#endif

#include <iostream>

#ifdef MODE == 1
int add(int n1, int n2) {
    return n1 + n2;
}
#endif // MODE == 1


int main()
{
    setlocale(LC_ALL, "Russian");

#if MODE == 0
    std::cout << "Работаю в режиме тренировки\n";

#elif MODE == 1
    int x, y;

    std::cout << "Работаю в боевом режиме\n";
    std::cout << "Введите число 1: ";
    std::cin >> x;

    std::cout << "Введите число 2: ";
    std::cin >> y;

    std::cout << "Результат сложения: " << add(x, y) << std::endl;

#else

    std::cout << "Неизвестный режим!";
#endif // MODE == 0
}