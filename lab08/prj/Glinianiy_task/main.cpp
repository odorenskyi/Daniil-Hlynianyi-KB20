#include <iostream>
#include <locale.h>
#include <windows.h>
#include "ModulesGlinianiy.h"

using namespace std;

int main()
{
    char a, b;
    int x, y, z, res;

    cout << "Danil Glinianiy. CNTU 2021. (c)" << endl;

    setlocale(LC_ALL, "ukr");
    cout << "\n¬ведiть символ a: ";
    cin >> a;

    cout << "\n¬ведiть символ b: ";
    cin >> b;

    if(a+1 < b-2){
        cout << "\n–езультат: \a" << true;
    }
    else{
        cout << "\n–езультат: \a" << false;
    }

    cout << "\n\n¬ведiть x: ";
    cin >> x;

    if(x == 0 || x < 3){
        cout << "\nЌекоректно введене значенн€, x не може дорiвнювати нулю, та буди меншим за 3!";
        Sleep(30000);
        return 0;
    }
    cout << "„исло x в шiстнадц€тковiй системi: " << hex << x << endl;

    cout << "\n¬ведiть число y: ";
    cin >> y;
    cout << "„исло y в шiстнадц€тковiй системi: " << hex << y << endl;

    cout << "\n¬ведiть число z: ";
    cin >> z;
    cout << "„исло z в шiстнадц€тковiй системi: " << hex << z << endl;

    res = s_calculation(x, y, z);

    cout << "\n–езультат: \a" << hex <<  res << endl;

    Sleep(30000);

    return 0;
}
