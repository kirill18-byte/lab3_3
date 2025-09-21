#include <iostream>
using namespace std;

int main()
{
    // Begin38
    
    
    // декларація змінних
    double km;
   
    
    cout << "Введіть відстань у кілометрах: ";
    cin >> km;

    double meters = km * 1000;
    double centimeters = km * 100000;

    cout << "Відстань у метрах: " << meters << " м" << endl;
    cout << "Відстань у сантиметрах: " << centimeters << " см" << endl;
   
   
    //Begin17
   
   
    // декларація змінної
    double x, y;

    // введення змінної
    cout << "Ця програма обчислює значення функції y = 4*(x-3)^6- 7*(x-3)^3 + 2." << endl;
    cout << "Введіть значення x: ";
    cin >> x;

    // обчислення значення функції
    double x3 = x * x * x;
    double x6 = x3 * x3; 
    y = 4 * (x-3) * x6 - 7 * (x-3) * x3 + 2;

    // виведення результату
    cout << "Значення функції y при x = " << x << " дорівнює: " << y << endl;
    
    
    //Begin24
    
    
    // декларація змінних
    double X, A, Y;

    // введення змінних
    cout << "Ця програма обчислює вартість цукерок " << endl;
    cout << "Введіть масу  цукерок (Х кг): ";
    cin >> X;
    cout << "Введіть ціну за Х цукерок (А грн): ";
    cin >> A;
    cout << "Введіть масу цукерок (Y кг): ";
    cin >> Y;


    // обчислення вартості за 1 кг
    double pricePerKg = A / X;
    double priceForY = pricePerKg * Y;

    // Виведення результатів
    cout << "1 кг цукерок коштує: " << pricePerKg << " грн" << endl;
    cout << Y << " кг цукерок коштує: " << priceForY << " грн" << endl;
    
    return 0;
}
