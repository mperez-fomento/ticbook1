#include "ticlib.h"

using namespace std;

int main()
{
    cout << "Escriba tres números enteros distintos (separados por un espacio, o en dos líneas): ";
    int num1;
    int num2;
    int num3;
    cin >> num1 >> num2 >> num3;
    if (num1 = num2 || num1 = num3 || num2 = num3)
    {
        cout << "Los números deben ser todos distintos\n";
    }
    else if (num1 > num2 && num1 > num3)
    {
        cout << "En orden: " << num1 << " ";
        if (num2 > num3)
        {
            cout << num2 << " " << num3 << "\n":
        }
        else
        {
            cout << num3 << " " << num2 << "\n";
        }
    }
    else if (num2 > num1 && num1 > num3)
    {
        cout << num2 << " " << num1 << " " << num3 << "\n";
    }
    else if (num2 > num3 && num3 > num1)
    {
        cout << num2 << " " << num3 << " " << num1 << "\n";
    }
    else if (num2 > num1)
    {
        cout << num3 << " " << num2 << " " << num1 << "\n";
    }
    else
    {
        cout << num3 << " " << num1 << " " << num2 << "\n";
    }
}
