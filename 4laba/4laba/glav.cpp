#include <iostream>

using namespace std;

extern "C" float R; // Объявление внешней переменной R
extern "C" float SumR(); // Объявление внешней функции SumR

int main(int argc, char** argv)
{
    SumR(); // Вызов функции SumR для вычисления минимального значения
    float result = R;

    cout << "R: " << result << endl; // Вывод значения R

    return 0;
}
