#ifndef _MIRONOV_MATHTASK_H_
#define _MIRONOV_MATHTASK_H_

#include <string>
using namespace std;

//функция контроля вводимых данных
bool UserInput(const std::string &input) {
    // Если строка пустая - ввод некорректен
    if (input.empty())
        return false;

    // Проверяем, состоит ли строка только из цифр
    for (char c : input) {
        if (!isdigit(c)) {
            return false; // Если есть хотя бы один нецифровой символ, возвращаем false
        }
    }

    // Попытаться преобразовать введенное значение в тип int
    try {
        int number = stoi(input);
        // Если введенное значение отрицательное - ввод некорректен
        if (number < 1)
            return false;
    } catch (...) { // Если возникла ошибка в блоке try
        return false;
    }

    return true; // Если все проверки пройдены, возвращаем true
}

//вычисление площади прямоугольника
int CalcRectangleArea(int NumberA, int NumberB) {
    return NumberA * NumberB ;
}
#endif