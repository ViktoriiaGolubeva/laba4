#include <iostream>

using namespace std;

extern "C" float R; // ���������� ������� ���������� R
extern "C" float SumR(); // ���������� ������� ������� SumR

int main(int argc, char** argv)
{
    SumR(); // ����� ������� SumR ��� ���������� ������������ ��������
    float result = R;

    cout << "R: " << result << endl; // ����� �������� R

    return 0;
}
