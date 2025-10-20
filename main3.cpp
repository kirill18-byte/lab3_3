#include <iostream>
using namespace std;

int main() 
{
    // if15 
    
    double a, b, c;
    cout << "Введіть три числа: ";
    cin >> a >> b >> c;

    double sum;

    // Знаходимо найменше число і відкидаємо його
    if (a <= b && a <= c)
        sum = b + c;
    else if (b <= a && b <= c)
        sum = a + c;
    else
        sum = a + b;

    cout << "Сума двох найбільших чисел = " << sum << endl;
    
    
    // if 17
    
    double A, B, C;
    cout << "Введіть три числа A, B, C: ";
    cin >> A >> B >> C;

    // Перевіряємо, чи впорядковані за зростанням або спаданням
    
    if ((A < B && B < C) || (A > B && B > C)) {
        A *= 2;
        B *= 2;
        C *= 2;
    } else {
        A = -A;
        B = -B;
        C = -C;
    }

    cout << "Нові значення:\n";
    cout << "A = " << A << endl;
    cout << "B = " << B << endl;
    cout << "C = " << C << endl;
    
    // if 35
    
    double x;
    int u;

    cout << "Введіть значення x: ";
    cin >> x;

    if (x <= 0)
        u = int(-x * x);
    else if (x <= 3)
        u = int(x);
    else
        u = int(9 - x);

    cout << "Значення функції u(x) = " << u << endl;

    return 0;
}
