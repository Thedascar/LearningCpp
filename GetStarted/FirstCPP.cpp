#include <iostream>
#include <wchar.h>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    cout << "Hello World com @@áácento : @ nº" << endl;
    system("pause");
    return 0;
}