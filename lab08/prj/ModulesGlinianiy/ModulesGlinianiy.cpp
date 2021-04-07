#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

float s_calculation(float x, float y, float z)
{
    float S = pow(3 * sin(sqrt(12 * x + log10(x - 3))), y) + z/x;
    S = int(S*100 + 0.5)/100.0;
    return S;
}

float task_9_1(float gSize)
{
    float res;

    if(gSize < 208)
    {
        res = gSize * 1.299;
    }
    else if(gSize < 500)
    {
        res = gSize * 1.788;
    }
    else if(gSize >= 500)
    {
        res = gSize * 3.645;
    }
    return res;
}

float task_9_2(float l)
{
    if(l==20.5)
    {
        cout << "RUA=-; RGB=1";
    }
    else if(l==21)
    {
        cout << "RUA=-; RGB=1,5";
    }
    else if(l==21.5)
    {
        cout << "RUA=-; RGB=2";
    }
    else if(l==22)
    {
        cout << "RUA=-; RGB=2,5";
    }
    else if(l==22.5)
    {
        cout << "RUA=-; RGB=3";
    }

    else if(l==23)
    {
        cout << "RUA=35; RGB=4";
    }
    else if(l==23.5)
    {
        cout << "RUA=36; RGB=4,5";
    }
    else if(l==24)
    {
        cout << "RUA=36,5; RGB=5";
    }
    else if(l==24.5)
    {
        cout << "RUA=37; RGB=5,5";
    }
    else if(l==25)
    {
        cout << "RUA=38; RGB=6";
    }
     else if(l==25.5)
    {
        cout << "RUA=38/39; RGB=6,5";
    }
     else if(l==26)
    {
        cout << "RUA=40,5; RGB=7,5";
    }
     else if(l==26.5)
    {
        cout << "RUA=41; RGB=8";
    }
     else if(l==27)
    {
        cout << "RUA=41,5; RGB=8,5";
    }
     else if(l==27.5)
    {
        cout << "RUA=42; RGB=9";
    }
     else if(l==28)
    {
        cout << "RUA=42/43; RGB=9,5";
    }
     else if(l==28.5){
        cout << "RUA=43; RGB=10";
    }
     else if(l==29)
    {
        cout << "RUA=44; RGB=11";
    }
     else if(l==29.5)
    {
        cout << "RUA=45; RGB=11,5";
    }
     else if(l==30)
    {
        cout << "RUA=46; RGB=12";
    }
     else if(l==30.5)
    {
        cout << "RUA=47; RGB=12,5";
    }
     else if(l==31)
    {
        cout << "RUA=47,5; RGB=13";
    }
     else if(l==31.5)
    {
        cout << "RUA=48; RGB=14";
    }
     else if(l==32)
    {
        cout << "RUA=48,5; RGB=14,5";
    }
    else
    {
        cout <<"\aНекоректно введене значененя, спробуйте ще раз!\n";
    }

}

int task_9_3(int num)
{

    int sh = 0b00000000000000000000000000000001;
    int d11 = 0b00000000000000000000010000000000;
    int amount = 0;
    bool zero = num & d11;

    for (int i = 0; i < 32; i++) {
        bool one = num & sh;
        if (zero && !one) {
            amount++;
        }
        if (!zero && one) {
            amount++;
        }
        sh = sh << 1;
        }


    return amount;
}
