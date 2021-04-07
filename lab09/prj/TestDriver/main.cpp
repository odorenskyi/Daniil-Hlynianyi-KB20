#include <iostream>
#include <locale.h>
#include "ModulesGlinianiy.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "ukr");
    float gSize[5] = {50, 150, 250, 12.5, 0};
    float res[5] = {64.95, 194.85, 447, 16.2375, 0};

    for(int i = 0; i < 5; i++)
    {
        if(task_9_1(gSize[i]) == res[i])
        {
            cout << "\nPassed! Your testing result = " << res[i] << endl;
        }
        if(task_9_1(gSize[i]) != res[i])
        {
            cout << "\nFailed! Your testing result != " << res[i] << endl;
        }
    }


    float l[5] = {27, 26.5, 13, 22.5, 26};

    for(int i = 0; i < 5; i++)
    {
        if(task_9_2(l[i]) == l[i])
        {
            cout << "\nPassed! Your testing result = " << task_9_2 << endl;
        }
    }


    float num[5] = {50, 150, 250, 12.5, 0};
    float sh[5] = {3, 4, 6, 2, 0};

    for(int i = 0; i < 5; i++)
    {
        if(task_9_3(num[i]) == sh[i])
        {
            cout << "\nPassed! Your testing result = " << sh[i] << endl;
        }
        if(task_9_3(num[i]) != sh[i])
        {
            cout << "\nFailed! Your testing result != " << sh[i] << endl;
        }
    }
    getchar();
}
