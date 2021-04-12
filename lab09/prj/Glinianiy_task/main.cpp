#include <iostream>
#include <locale.h>
#include <windows.h>
#include "ModulesGlinianiy.h"

using namespace std;

void s_cal()
{
    int x, y, z, res;

    setlocale(LC_ALL, "ukr");
    cout << "\n\n¬ведiть число x: ";
    cin  >>  x;

    cout << "\n¬ведiть число y: ";
    cin >> y;

    cout << "\n¬ведiть число z: ";
    cin >> z;

    res = s_calculation(x, y, z);

    cout << "\n–езультат: \a" << dec <<  res << endl;
}

void fFunc()
{
    setlocale(LC_ALL, "ukr");

    float gSize, res;

    do{
    cout << "¬ведiть об'Їм використаного природного газу за мiс€ць: ";
    cin >> gSize;

    }while(gSize <= 0);
    res = task_9_1(gSize);

    cout << "\a—ума до сплати за спожитий газ: " << res << " грн" << endl;
}

void sFunc()
{
    float l, r;

    setlocale(LC_ALL, "ukr");
    do{
    cout << "\n¬ведiть розмiр взутт€ у сантиметрах: ";
    cin >> l;

    r = task_9_2(l);
    }while(32 < l || 20.5 >= l);
    cout << "\a" << r;


}

void tFunc()
{
    setlocale(LC_ALL, "ukr");
    int input = -1;

        cout << "\n\n¬ведiть число: " << endl;
        cin >> input;
        if (input >= 0)
        {
            int d11 = 2048;
            if (input & d11)
            {
                cout << "\a\n„исло двiйкових нулiв = " << task_9_3(input) << endl;
            }
        else
            {
                cout << "\a\n„исло двiйкових одиниць = " << task_9_3(input) << endl;
            }
        }
}

int main()
{
    char a, b;

    setlocale(LC_ALL, "ukr");
    do{
    cout <<  "u - s_calculate\  r - task_9_2\
    \n t - task_9_1\     e - task_9_3";
    cout << "\n¬ведiть значенн€ щоб викликати функцiю:" << endl;
    cin >> a;

    if(a == 'u')
    {
        s_cal();
        cout << "\nякщо бажаЇте вийти з програми введiть 'w', щоб запустити програму потворно натиснiть 'i'";
        cin >> a;
        if(a == 'i'){
            s_cal();
        }
    }
    else if(a == 't')
    {
        fFunc();
        cout << "\nякщо бажаЇте вийти з програми введiть 'w', щоб запустити програму потворно натиснiть 'i'";
        cin >> a;
        if(a == 'i'){
            fFunc();
        }
    }
    else if(a == 'r')
    {
        sFunc();
        cout << "\nякщо бажаЇте вийти з програми введiть 'w', щоб запустити програму потворно натиснiть 'i'";
        cin >> a;
        if(a == 'i'){
            sFunc();
        }
    }
    else if(a == 'e')
    {
        tFunc();
        cout << "\nякщо бажаЇте вийти з програми введiть 'w', щоб запустити програму потворно натиснiть 'i'";
        cin >> a;
        if(a == 'i'){
            tFunc();
        }
    }
    else if (a != 'w' && a != 'i')
        {
            cout << "\a\nЌе вiрний ввод" << endl;
        }
    }while (a != 'w' && a != 'i');

    getchar();
}
