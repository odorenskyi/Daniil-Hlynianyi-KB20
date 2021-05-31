#include <iostream>
#include <ModulesGlinianiy.h>

using namespace std;

int main()
{
    float x, y, z, res;

    cout << "Enter x: ";
    cin >> x;

    cout << "\nEnter y: ";
    cin >> y;

    cout << "\nEnter z: ";
    cin >> z;

    res = s_calculation(x, y, z);

    cout << "Your result is: " << res << endl;

    return 0;
}
