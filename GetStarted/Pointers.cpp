#include <iostream>
#include <wchar.h>
#include <locale>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

    string name = "Lucas";
    string* ptr = &name;

    cout << "name: " << name << endl;
    cout << "pointer: " << ptr << endl;
    cout << "pointer value : " << *ptr << endl;

    system("pause");
    return 0;
}