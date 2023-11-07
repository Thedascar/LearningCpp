#include <iostream>
#include <wchar.h>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

    const string name = "Lucas Ramon Campos Assunão";

    cout << "My name is: " << name << endl;

    system("pause");
    return 0;
}