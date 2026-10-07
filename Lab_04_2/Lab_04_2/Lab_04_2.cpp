// Лабораторна робота № 4, завдання 4.2. Табуляція функції однієї змінної.
// Варіант 14.

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double x, xp, xk, dx, A, B, y;   //x - аргумент; хр - початок інтервалу; xk - кінець інтервалу; A = 4x - 1; B = значення виразу у фігурній дужці; y = підсумок 

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << "     |"
        << setw(7) << "y" << "      |" << endl;
    cout << "---------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        A = fabs(4 * x - 1);
        if (x < 0)
            B = pow(x, 7) - 2 * x;
        else
            if (x < 3)
                B = atan((exp(x) + 1) / 8);
            else
                B = pow(x, 4) + exp(x * x + 3);
        y = A + B;

        cout << "|" << setw(7) << setprecision(2) << x
            << "    |" << setw(10) << setprecision(3) << y
            << "    |" << endl;
        x += dx;
    }
    cout << "---------------------------" << endl;

    return 0;
}