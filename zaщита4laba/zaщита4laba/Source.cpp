#include <iostream>
#include <cmath>
using namespace std;
float fun_el(float z)
{
    float f;
    f = (cos(z) - 2 * sin(z)) / exp(z);

    cout << "f = " << f << std::endl; // Вывод значения f в консоль

    return f;
}

float SumR()
{
    float R = 0.0;
    float X1 = -1.0;
    float step = 0.01;
    float minValue = 1.0e38;
    int counter = 201;

    while (counter != 0)
    {
        float temp = X1;
        float result = fun_el(temp);

        if (result < minValue)
        {
            minValue = result;
        }

        X1 += step;
        counter--;
    }

    R = minValue;

    return R;
}

int main(int argc, char** argv)
{
    float result = SumR(); // Вызов функции SumR для вычисления минимального значения

    cout << "R: " << result << std::endl; // Вывод значения R

    return 0;
}
